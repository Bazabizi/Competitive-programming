class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int>tem;
        deque<int>ans;
        vector<int>p;
        int j=0;
        for(int i=0;i<nums1.size();i++)
        {
            for(int j=0;j<nums2.size();j++)
            {
                if(nums1[i]==nums2[j])
                {
                    tem.push_back(j);
                }
            }
        }
        for(int i=0;i<tem.size();i++)
        {
            int x=tem[i];
            for(int i=x;i<nums2.size();i++)
            {
                if(nums2[x]<nums2[i])
                {
                    ans.push_back(nums2[i]);
                }
                
            }if(ans.empty())
                    ans.push_back(-1);
            p.push_back(ans.front());
            ans.clear();
        }
        return p;
    }
};
