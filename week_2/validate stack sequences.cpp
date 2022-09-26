class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        stack<int>temp;
        int i=0,j=0;
        while(i<pushed.size()&& j<pushed.size())
        {
            temp.push(pushed[i]);
            i++;
            while(!temp.empty() && popped[j]==temp.top())
            {
                temp.pop();
                j++;
            }
        }
        if(temp.empty())
            return true;
        else
            return false;
        
    }
};
