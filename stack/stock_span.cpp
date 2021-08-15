vector <int> calculateSpan(int arr[], int n)
    {
       vector<int> ans;
        stack<pair<int,int>> s;
        int i;
        for(i=0;i<n;i++)
        {
            if(s.size()==0)
              ans.push_back(-1);
            else if(s.size()>0 && s.top().first>arr[i])
            {
                ans.push_back(s.top().second);
            }
            else if(arr[i]>=s.top().first)
            {
                while(s.size()>0 && arr[i]>=s.top().first)
                {
                    s.pop();
                }
                if(s.size()==0)
                  ans.push_back(-1);
                else
                {
                    ans.push_back(s.top().second);
                }
            }
            s.push({arr[i],i});
        }
        for(i=0;i<ans.size();i++)
        {
            ans[i]=i-ans[i];
        }
        return ans;
    }