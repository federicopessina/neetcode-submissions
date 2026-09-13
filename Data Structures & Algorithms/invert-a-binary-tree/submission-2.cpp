/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        invertChilds(root);
        return root;
    }

private:
    void invertChilds(TreeNode* node) {
        if (node == nullptr) return;

        auto tmp = node->left;
        node->left = node->right;
        node->right = tmp;

        invertChilds(node->left);
        invertChilds(node->right);
    }
};
