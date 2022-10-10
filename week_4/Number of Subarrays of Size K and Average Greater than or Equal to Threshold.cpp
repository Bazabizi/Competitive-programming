class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int i=0,t=threshold;
        int j=0;
        int count=0;
        int sum=0;
        while(j<arr.size())
        {
            while(j-i+1<=k)
            {
                sum +=arr[j];
                j++;
            }
            if(sum/k>=t)
                count++;
            
            sum-=arr[i];
            i++;
        }
        return count;
    }
};
