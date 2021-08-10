int burntime(TreeNode* root,int leaf,int &dist,int&res)
  {
     if(!root)
     {
         return 0;
     }
     if(root->val==leaf)
     {
         dist=0;
         return 1;
     }
     int ldist=-1,rdist=-1;
     int lh=burntime(root->left,leaf,ldist,res);
     int rh=burntime(root->right,leaf,rdist,res);
     if(ldist!=-1)
     {
         dist=ldist+1;
         res=max(res,rh+dist);
     }
     if(rdist!=-1)
     {
         dist=rdist+1;
         res=max(res,lh+dist);
     }
     return max(lh,rh)+1;
  }
int Solution::solve(TreeNode* root, int target) {
    int dist=-1;
        int res=0;
        burntime(root,target,dist,res);
        return res;
}