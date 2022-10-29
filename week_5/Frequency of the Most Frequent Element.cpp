class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());  
        int n =nums.size();
        int i=0;
        int ans=0;
        long long sum=k;
        
        for(int j=0; j<n; j++){
            sum+=nums[j];
            
            while(sum<(long) nums[j]*(j-i+1)){
                sum-=nums[i];
                i++;
            }
            ans=max(ans,j-i+1);
        }
        return ans;
    }
};
