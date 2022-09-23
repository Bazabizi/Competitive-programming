class Solution {
public:
    bool isValid(string s) {
        stack<int>temp;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='(' || s[i]=='{' || s[i]=='[' )
            {
                temp.push(s[i]);
            }
            else
            {
                if(temp.empty())
                    return false;
                else
                {
                    char x=temp.top();
                    temp.pop();
                    if((x=='(' && s[i]==')') || (x=='{' && s[i]=='}') || (x=='[' && s[i]==']' ))
                    {
                    
                    }
                    else
                        return false;
                    
                }
            }
        }
        if(temp.empty())
            return true;
        else 
            return false;
    }
};
