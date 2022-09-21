class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int>sum;
        for(int i=0;i<nums.size();i++)
        {
            sum.push_back(0);
        }
        for(int i=0;i<nums.size();i++)
        {
            for(int j=0;j<nums.size();j++)
            {
                if(j!=i&&nums[j]>nums[i])
                {
                    sum[j]+=1;
                }
            }
        }return sum;
    }  
};
