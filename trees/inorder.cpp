void inorderutil(TreeNode*root,vector<int>&ans)
 {
     if(!root)
     {
         return;
     }
     inorderutil(root->left,ans);
     ans.push_back(root->val);
     inorderutil(root->right,ans);
 }
vector<int> Solution::inorderTraversal(TreeNode* root) {
    vector<int> ans;
    inorderutil(root,ans);
    return ans;
}