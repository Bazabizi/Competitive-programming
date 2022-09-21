class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        int temp;
        vector<int>ans;
        for(int i=0;i<nums.size()-1;i++)
        {
            for (int j=i+1;j<nums.size();j++)
            {
                if(nums[i]>nums[j])
                {
                    temp=nums[i];
                    nums[i]=nums[j];
                    nums[j]=temp;
                }
            }
        }
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==target)
            {
                ans.push_back(i);
            }
        }
        return ans;
    }
};
