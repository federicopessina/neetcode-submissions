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
    bool isSubtree(TreeNode* root, TreeNode* subRoot) { 
        // hedge cases   
        if (subRoot == nullptr) return true; // case empty subTree 
        if (root == nullptr) return false; // case empty tree
        if (isSameTree(root, subRoot)) return true; // case tree == subtree
        // recursive check
        return isSubtree(root->left, subRoot) or isSubtree(root->right, subRoot);
    }


private:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if (p == nullptr and q == nullptr) return true;
        if (p == nullptr or q == nullptr) return false;
        if (p->val != q->val) return false;
        return isSameTree(p->left, q->left) and isSameTree(p->right, q->right);
    } 
};
