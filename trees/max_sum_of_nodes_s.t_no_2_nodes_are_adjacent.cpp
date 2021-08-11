class Solution{
  public:
    //Function to return the maximum sum of non-adjacent nodes.
    unordered_map<Node*,int> dp;
    int getMaxSum(Node *root) 
    {
        if(!root)
         return 0;
        if(dp[root])
          return dp[root];
        int inc=root->data;
        if(root->left)
        {
            inc+=getMaxSum(root->left->left);
            inc+=getMaxSum(root->left->right);
        }
        if(root->right)
        {
            inc+=getMaxSum(root->right->left);
            inc+=getMaxSum(root->right->right);
        }
        int excl=getMaxSum(root->left)+getMaxSum(root->right);
        dp[root]=max(inc,excl);
        return dp[root];
    }
};