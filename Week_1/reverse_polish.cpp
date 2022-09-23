class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int>ans;long long int v1,v2,val;
       string x;
    if(tokens.size()==1)
        {
            return stoi(tokens[0]);
        }
    else{    
        for(int i=0;i<tokens.size();i++)
        {
            x=tokens[i];
            if((x!="+" && x !="-" && x!="/" && x!="*" ))
            {
                int y=stoi(x);
                ans.push(y);
            }
            else
            {
                if(x=="+")
                {
                    v2=ans.top();
                    ans.pop();
                    v1=ans.top();
                    ans.pop();
                    val=v1+v2;
                    ans.push(val);
                }
                else if(x=="-")
                {
                    v2=ans.top();
                    ans.pop();
                    v1=ans.top();
                    ans.pop();
                    val=v1-v2;
                    ans.push(val);
                }
                else if(x=="*")
                {
                    v2=ans.top();
                    ans.pop();
                    v1=ans.top();
                    ans.pop();
                    val=v1*v2;
                    ans.push(val);
                }
                else if(x=="/")
                {
                    v2=ans.top();
                    ans.pop();
                    v1=ans.top();
                    ans.pop();
                    val=v1/v2;
                    ans.push(val);
                }
            }
        }
        return val;
      }
    }
};
