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
    TreeNode(int x, TreeNode *left, TreeNode *right) 
        : val(x), left(left), right(right) {}
};

class Solution {
public:
    vector<TreeNode*> generateTrees(int n) {
        if (n == 0) return {};
        // return solve1(1, n);
        return solve2(1, n);
    }

private:
    vector<TreeNode*> solve1(int start, int end) {
        if (start > end) return {NULL};

        vector<TreeNode*> res;
        for (int i = start; i <= end; i++) {
            vector<TreeNode*> left_bst = solve1(start, i - 1);
            vector<TreeNode*> right_bst = solve1(i + 1, end);

            for (TreeNode* left_root : left_bst) {
                for (TreeNode* right_root : right_bst) {
                    TreeNode* root = new TreeNode(i);
                    root->left = left_root;
                    root->right = right_root;
                    res.push_back(root);
                }
            }
        }
        return res;
    }

    map<pair<int, int>, vector<TreeNode*>> mp;
    vector<TreeNode*> solve2(int start, int end) {

        if (start > end)
            return {NULL};
        else if (start == end) {
            TreeNode* root = new TreeNode(start);
            return mp[{start, end}] = {root};
        }

        if (mp.find({start, end}) != mp.end()) {
            return mp[{start, end}];
        }

        vector<TreeNode*> res;
        for (int i = start; i <= end; i++) {
            vector<TreeNode*> left_bst = solve2(start, i - 1);
            vector<TreeNode*> right_bst = solve2(i + 1, end);

            for (TreeNode* left_root : left_bst) {
                for (TreeNode* right_root : right_bst) {
                    TreeNode* root = new TreeNode(i);
                    root->left = left_root;
                    root->right = right_root;
                    res.push_back(root);
                }
            }
        }
        return mp[{start, end}] = res;
    }
};

// Find height of tree
int height(TreeNode* root) {
    if (!root) return 0;
    return 1 + max(height(root->left), height(root->right));
}

// Print tree top-down (pretty)
void printTreeTopDown(TreeNode* root) {
    if (!root) return;

    int h = height(root);
    int maxWidth = (1 << h) - 1; // 2^h - 1 spaces
    vector<vector<string>> res(h, vector<string>(maxWidth, " "));

    function<void(TreeNode*, int, int, int)> fill = [&](TreeNode* node, int level, int l, int r) {
        if (!node) return;
        int mid = (l + r) / 2;
        res[level][mid] = to_string(node->val);
        fill(node->left, level + 1, l, mid - 1);
        fill(node->right, level + 1, mid + 1, r);
    };

    fill(root, 0, 0, maxWidth - 1);

    for (auto &row : res) {
        for (auto &s : row) cout << (s == " " ? " " : s);
        cout << "\n";
    }
}

int main() {
    Solution sol;
    int n = 3;   // Example: generate trees for numbers 1..3

    vector<TreeNode*> trees = sol.generateTrees(n);

    cout << "Total Unique BSTs for n = " << n << " is: " << trees.size() << "\n\n";

    int idx = 1;
    for (TreeNode* t : trees) {
        cout << "Tree " << idx++ << ":\n";
        printTreeTopDown(t);
        cout << "\n---------------------------\n\n";
    }

    return 0;
}
