class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        int out = 0;
        int n = grid.size();
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                int flag = 1;
                for(int k=0;k<n;k++){
                    if(grid[i][k]!=grid[k][j]){
                        flag = 0;
                    }
                }
                out = out + flag;
            }
        }
        return out;
    }
};