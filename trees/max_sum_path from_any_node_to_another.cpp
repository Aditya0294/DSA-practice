int solve(TreeNode* root,int&res)
    {
        if(!root)
            return 0;
        int lsum=solve(root->left,res);
        int rsum=solve(root->right,res);
        int temp=max(max(lsum,rsum)+root->val,root->val);
        int ans=max(temp,lsum+rsum+root->val);
        res=max(res,ans);
        return temp;
    } 
int Solution::maxPathSum(TreeNode* root) {
    if(!root)
            return 0;
        int res=INT_MIN;
        solve(root,res);
        return res;
}