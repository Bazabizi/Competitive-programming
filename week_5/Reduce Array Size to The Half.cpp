class Solution {
public:
    static bool cmp(pair<int,int>&a ,pair<int,int>&b){
            return a.second>b.second;
    }
    
    int minSetSize(vector<int>& arr) {
     unordered_map<int,int>m;
      int n=arr.size();
      int counts=0,sum=0,i=0;
       
        for(auto i: arr){
            m[i]++;
        }
         vector<pair<int,int>>temp(m.begin(),m.end());
   
        sort(temp.begin(), temp.end(),cmp);
        
        while(sum <n/2){
            sum+=temp[i].second;
            counts++;
            i++;
        }          
        
        return counts;   
    }
};
