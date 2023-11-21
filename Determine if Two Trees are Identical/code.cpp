class Solution
{
    public:
    void solve(Node* ans,vector<int>& vec)
    {
        queue<Node*> q;
        q.push(ans);
        while(!q.empty())
        {
            int n=q.size();
            while(n)
            {
                Node* t=q.front();
                q.pop();
                n--;
                
                if(t)
                vec.push_back(t->data);
                
                if(t->left)
                q.push(t->left);
                
                if(t->right)
                q.push(t->right);
                
            }
        }
    }
    bool isIdentical(Node *r1, Node *r2)
    {
        vector<int> v1,v2;
        solve(r1,v1);
        solve(r2,v2);
        
        return v1 == v2;
    }
};
