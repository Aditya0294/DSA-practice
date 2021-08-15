vector<long long> nextLargerElement(vector<long long> arr, int n){
        vector<long long int> ans;
        stack<long long int> s;
        int i;
        for(i=n-1;i>=0;i--)
        {
            if(s.size()==0)
              ans.push_back(-1);
            else if(s.size()>0 && s.top()>arr[i])
            {
                ans.push_back(s.top());
            }
            else if(arr[i]>=s.top())
            {
                while(s.size()>0 && arr[i]>=s.top())
                {
                    s.pop();
                }
                if(s.size()==0)
                  ans.push_back(-1);
                else
                {
                    ans.push_back(s.top());
                }
            }
            s.push(arr[i]);
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};