class Solution {
public:
    vector<int> corpFlightBookings(vector<vector<int>>& bookings, int n) {
        vector<int>ans(n,0);
        int s,e,seat;
        for(auto &i: bookings)
        {
            s=i[0]-1;
            e=i[1]-1;
            seat=i[2];
            ans[e]+=seat;
            if(s>0)
                ans[s-1]-=seat;
        }
        for(int i=n-2;i>=0;i--)
            ans[i]+=ans[i+1];
        return ans;
    }
};
