class Solution {
public:
   static bool comp(string a, string b){
            return (a+b)>=(b+a);
        }
    string largestNumber(vector<int>& nums) {
       // priority_queue<string, vector<string>, comp>a;
        vector<string>a;
        string ans="";
        int n=0;
        int x=0;
        for(int i=0; i<nums.size(); i++){
           if(nums[i]==0){
               x++;
           }
        }
        if(x==nums.size()) return "0";
        
        for(auto i: nums)
            a.push_back(to_string(i));
        
        sort(a.begin(),a.end(),comp);
        
        while(n<a.size())
        {
            ans+=a[n];
        n++;
        }
        
        
        return ans;
    }
   
};
