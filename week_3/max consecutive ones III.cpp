class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int i=0;
        int j=0;
        int ans=0;
        int count=0;
        for(j=0;j<nums.size();j++)
        {
            if(nums[j] == 0)
                 count++;
            while (count > k)
            {
                if (nums[i] == 0)
                    count--;
                i++;
            }
            ans = max(ans, (j -i + 1));
        }
        return ans;
    }
};
