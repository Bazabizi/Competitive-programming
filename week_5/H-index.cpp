class Solution {
public:
    int hIndex(vector<int>& citations) {
          int n=citations.size(),count=0;
        sort(citations.begin(),citations.end());
        for(int i=n-1; i>=0; i--){
            if(n-i<=citations[i])
                count++;
        }
        return count;
    }
};
