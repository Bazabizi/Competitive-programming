class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int y=0,i=0,j=0;
        int ans=0;
        
        while(j<nums.size()){
            if(nums[j] == 0)
                y++;
           while(y>1){
               if(nums[i]==0)
                   y--;
                   i++;
           }
             j++;
        ans=max(ans,j-i-1);
           
        }
        return ans;
    }
};
