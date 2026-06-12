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
    vector<vector<int>> levelOrder(TreeNode* root) {
        queue<TreeNode*> q;
        if(root) q.push(root);
        else return {};
        TreeNode* cur = nullptr;
        int count = 1;
        int level = 0;
        vector<vector<int>> res;
        while(!q.empty()) {
            int nulls = 0;
            vector<int> levelres;
            for(int i = 0 ; i < count; i++) {
                cur = q.front();
                if (cur->left) q.push(cur->left);
                else nulls++;
                if (cur->right) q.push(cur->right);
                else nulls++;
                q.pop();
                levelres.push_back(cur->val);
            }
            level++;
            count = count*2-nulls;
            res.push_back(levelres);
        }
        return res;
    }
};
