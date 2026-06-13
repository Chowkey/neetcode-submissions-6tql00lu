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
    int cur = -1001;
    bool isValidBST(TreeNode* root) {
        if (root == nullptr) return true;
        bool checkleft = isValidBST(root->left);
        if (root->val <= cur) return false;
        else cur = root->val;
        bool checkright = isValidBST(root->right);
        return checkleft && checkright;
    }
};
