void kutil(Node*root,int k,int a[],int count,int &ans,bool visited[])
{
    if(!root)
      return;
    a[count]=root->data;
    visited[count]=false;
    if(root->left==NULL && root->right==NULL)
    {
        if(count-k>=0 && visited[count-k]==false)
        {
            ans++;
            visited[count-k]=true;
            return;
        }
    }
    kutil(root->left,k,a,count+1,ans,visited);
    kutil(root->right,k,a,count+1,ans,visited);
}
int printKDistantfromLeaf(Node* root, int k)
{
    int a[100000];
    bool visited[100000]={false};
    int ans=0;
    kutil(root,k,a,0,ans,visited);
    return ans;
}