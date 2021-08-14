class Solution {
public:
    bool isValid(string s1) {
        stack<char> s;
        int i;
        for(i=0;i<s1.size();i++)
        {
            char c=s1[i];
            if(c=='('|| c=='{' || c=='[')
            {
                s.push(c);
            }
            else if(c==')')
            {
                if(s.size()==0)
                    return false;
                else if(s.top()!='(')
                    return false;
                else
                {
                    s.pop();
                }
            }
            else if(c=='}')
            {
              if(s.size()==0)
                    return false;
                else if(s.top()!='{')
                    return false;
                else
                {
                    s.pop();
                }  
            }
            else if(c==']')
            {
                if(s.size()==0)
                    return false;
                else if(s.top()!='[')
                    return false;
                else
                {
                    s.pop();
                }
            }
        }
        if(s.size()>0)
            return false;
        else
            return true;
        
        
    }
};