class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        int n=tokens.size();
        int i=0,j=n-1,ans=0;
        sort(tokens.begin(),tokens.end());
        while(i<=j)
        {
            if(tokens[i]<=power)
            {
                power-=tokens[i];
                    ans++;
                i++;
            }
            else if(power+tokens[j]>=tokens[i] && ans!=0 && i!=j)
            {
                power+=tokens[j];
                j--;
                ans--;
            }
            else
                break;
        }
        return ans;
    }
};
