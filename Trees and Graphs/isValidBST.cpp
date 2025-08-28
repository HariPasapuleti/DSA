#include <bits/stdc++.h>
using namespace std;

/**
 * Definition for a binary tree node.
 */
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    bool isValidBST(TreeNode* root) {
        return isValid(root, LONG_MIN, LONG_MAX);
    }

    bool isValid(TreeNode* node, long min, long max) {
        if (!node)
            return true;
        if (node->val <= min || node->val >= max)
            return false;
        return isValid(node->left, min, node->val) && isValid(node->right, node->val, max);
    }
};

int main() {
    Solution sol;

    // Example 1: Valid BST
    //      2
    //     / \
    //    1   3
    TreeNode* root1 = new TreeNode(2);
    root1->left = new TreeNode(1);
    root1->right = new TreeNode(3);

    cout << "Tree 1 is a valid BST? " 
         << (sol.isValidBST(root1) ? "Yes" : "No") << endl;

    // Example 2: Invalid BST
    //      5
    //     / \
    //    1   4
    //       / \
    //      3   6
    TreeNode* root2 = new TreeNode(5);
    root2->left = new TreeNode(1);
    root2->right = new TreeNode(4);
    root2->right->left = new TreeNode(3);
    root2->right->right = new TreeNode(6);

    cout << "Tree 2 is a valid BST? " 
         << (sol.isValidBST(root2) ? "Yes" : "No") << endl;

    return 0;
}
