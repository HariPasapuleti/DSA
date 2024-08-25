#include<iostream>
#include<vector>
#include<queue>

using namespace std;

struct Node {

    int data;
    struct Node* left;
    struct Node* right;
    Node(int val) {
        data = val;
        left = right = NULL;
    }
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
    levelTraversal(root);
    return 0;
}