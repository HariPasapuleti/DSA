#include<iostream>
#include<vector>
#include<queue>
#include<stack>

using namespace std;

struct Node {

    int data;
    struct Node* left;
    struct Node* right;
    Node(int val) {
        data = val;
        left = right = NULL;
    }
    // or
    // Node(int val) : data(val), left(NULL), right(NULL) {}
};

void preorderTraversal(Node* root)
{
    if(root == NULL) {
        return;
    }

    cout << root->data << " ";
    preorderTraversal(root->left);
    preorderTraversal(root->right);
}

void inorderTraversal(Node* root)
{
    if(root == NULL){
        return;
    }

    inorderTraversal(root->left);
    cout << root->data << " ";
    inorderTraversal(root->right);
}

void postorderTraversal(Node* root)
{
    if(root == NULL){
        return;
    }

    postorderTraversal(root->left);
    postorderTraversal(root->right);
    cout << root->data << " ";
}

vector<vector<int>> levelTraversal(Node* root)
{
    vector<vector<int>> result;

    if(root == NULL) return result;
    queue<Node*> que;
    que.push(root);

    while(!que.empty())
    {
        int size = que.size();
        vector<int> level;
        for(int i = 0; i < size; i++)
        {
            Node* node = que.front();
            que.pop();

            if(node->left != NULL) que.push(node->left);
            if(node->right != NULL) que.push(node->right);

            level.push_back(node->data);
            cout << node->data << " ";
        }
        result.push_back(level);
    }
}

vector<int> iterativePreorder(Node* root)
{
    vector<int> preorder;
    stack<Node* > stack;
    if(root == NULL) return preorder;

    stack.push(root);

    while(!stack.empty())
    {
        Node* node = stack.top();
        stack.pop();

        preorder.push_back(node->data);
        cout << node->data << " ";
        if(node->right != NULL) stack.push(node->right);
        if(node->left != NULL) stack.push(node->left);
    }
    return preorder;
}

vector<int> iterativePostorder2Stacks(Node* root)
{
    vector<int> postorder;
    stack<Node* > stack1, stack2;
    if(root == NULL) return postorder;

    stack1.push(root);

    while(!stack1.empty())
    {
        Node* node = stack1.top();
        stack1.pop();
        stack2.push(node);

        postorder.push_back(node->data);
        cout << node->data << " ";
        if(node->right != NULL) stack1.push(node->right);
        if(node->left != NULL) stack1.push(node->left);
    }

    while(!stack2.empty())
    {
        postorder.push_back(stack2.top()->data);
        stack2.pop();
    }
    return postorder;
}


vector<int> iterativeInorder(Node* root)
{
    vector<int> inorder;
    stack<Node*> stack; // Auxilary stack trees
    Node* node = root;

    while(true)
    {
        if(node != NULL) {
            stack.push(node);
            node = node->left;
        }
        else {
            if(stack.empty()) break;
            node = stack.top();
            stack.pop();
            inorder.push_back(node->data);
            cout << node->data << " ";
            node = node->right;
        }
    }
    return inorder;
}





int main()
{
    struct Node* root = new Node(1);

    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);
    root->left->right->left = new Node(8);
    root->right->right->left = new Node(9);
    root->right->right->right = new Node(10);

    // preorderTraversal(root);
    // inorderTraversal(root);
    // postorderTraversal(root);
    // levelTraversal(root);
    // iterativePreorder(root);
    // iterativeInorder(root);
    iterativePostorder2Stacks(root);
    return 0;
}