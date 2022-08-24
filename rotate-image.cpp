//https://leetcode.com/problems/rotate-image/

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n=matrix.size();
        for(int i=0;i<n;++i){
            int j=0;
            while(j<i){
                swap(matrix[i][j],matrix[j][i]);
                j++;
            }
        }
        for(int i=0;i<n/2;++i){
            int row=0;
            while(row<n){
                swap(matrix[row][i],matrix[row][n-i-1]);
                row++;
            }
        }
    }
};
