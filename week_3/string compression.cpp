class Solution {
public:
    int compress(vector<char>& chars) {
        string ans="";
        int n=chars.size();
         int count=0;
        for(int i=0;i<chars.size();i++)
        {
            count++;
            if(i+1>=n || chars[i]!=chars[i+1])
            {
                if(count==1)
                {
                    ans+=chars[i];
                    count=0;
                }
                else
                {
                    ans+=chars[i];
                    ans+=to_string(count);
                    count=0;
                }
            }
        }
        for (int j=0;j<ans.size();j++)
        {
            chars[j]=ans[j];
        }
        return ans.size();
    }
};
