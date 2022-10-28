class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        vector<int>ans;
        priority_queue<pair<int,int>>tem;
        for(auto i:nums)
        {
            mp[i]++;
        }
        for(auto i: mp)
        {
            tem.push({i.second,i.first});
        }
        while(k>0)
        {
            ans.push_back(tem.top().second);
            tem.pop();
            k--;
        }
        return ans;
    }
};
