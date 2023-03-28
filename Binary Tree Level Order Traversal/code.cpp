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
        vector<vector<int>> ans;
        vector<int> ans1;
        queue<TreeNode*> q;
        q.push(root);
        if(root == NULL)
        return {};
        while(!q.empty())
        {
            int n=q.size();
            ans1.clear();
            while(n>0)
            {
                n--;
                TreeNode* front =q.front();
                q.pop();
                int v=front->val;
                ans1.push_back(v);
                if(front->left)
                q.push(front->left);
                if(front->right)
                q.push(front->right);
            
            }
            ans.push_back(ans1);
        }
        return ans;
    }
};
