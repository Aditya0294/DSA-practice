void util(struct Node *root,int k,int level,vector<int>&ans)
{
    if(!root)
    {
        return;
    }
    if(level==k)
    {
        ans.push_back(root->data);
        return;
    }
    util(root->left,k,level+1,ans);
    util(root->right,k,level+1,ans);
    return;
}
vector<int> Kdistance(struct Node *root, int k)
{
  int level=0;
  vector<int> ans;
  util(root,k,level,ans);
  return ans;
}