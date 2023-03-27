class Solution {
public:
    int solve(TreeNode* root,string s,int& d,int& ans)
    {
        if(root == NULL)
        return 0;
        if( root ->left == NULL && root->right == NULL)
        {
            char c=root->val +'0';
            s.push_back(c);
            int val=stoi(s);
            cout << val << " " ;
            return val;
        }
        else
        {
            d=root->val;
            char c=d+'0';
            s.push_back(c);
            int left=solve(root->left,s,d,ans);
            int right=solve(root->right,s,d,ans);
            return left + right;
        }
    }
    int sumNumbers(TreeNode* root) {
        string s;
        int d=0,ans=0;
        ans=solve(root,s,d,ans);
        return ans;
    }
};
