//https://leetcode.com/problems/pascals-triangle/
class Solution {
public:
    vector<vector<int>> generate(int n) {
        vector<vector<int>>ans;
        
        for(int i=1;i<=n;i++){
            vector<int>dummy(i);
            dummy[0]=1;
            dummy[i-1]=1;
            
            ans.push_back(dummy);
        }
        for(int i=2;i<n;i++){
            for(int j=1;j<i;j++){
                ans[i][j]=ans[i-1][j]+ans[i-1][j-1];
            }
        }
        return ans;
        
    }
};
