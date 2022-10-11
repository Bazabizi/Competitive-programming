class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
     int n=nums.size();
        unordered_map<int,int>mp;
        int i=0,count=0,sum=0;
        while(i<n){
          sum+=nums[i];            
          if(sum ==k){
              count++; 
             }
          if(mp.find(sum-k)!=mp.end())
              count+=mp[sum-k];
             mp[sum]++;
            i++;
       } 
        return count;
    }
};
