class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        
        int n=points.size();
        vector<vector<int>>temp;
        vector<vector<int>>ans; 
        for(int i=0; i<n; i++)
        {
            temp.push_back({points[i][0]*points[i][0] + points[i][1]*points[i][1],points[i][0],points[i][1]});
        }
        sort(temp.begin(), temp.end());
        
        for(int i=0; i<k; i++)
        {
           ans.push_back({temp[i][1],temp[i][2]});
        }
        return ans;
    }
};
 
