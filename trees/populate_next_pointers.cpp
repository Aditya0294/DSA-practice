void Solution::connect(TreeLinkNode* root) {
    if(root==NULL)
            return ;
        queue<TreeLinkNode*>q;
        q.push(root);
        while(!q.empty())
        {
            int sz=q.size();
            while(sz--)
            {
                TreeLinkNode*temp=q.front();
                q.pop();
                if(temp->left)
                    q.push(temp->left);
                if(temp->right)
                    q.push(temp->right);
                TreeLinkNode*x=NULL;
                if(sz!=0)
                {
                    x=q.front();
                }
                temp->next=x;
            }
        }
}