class Solution {
public:
    int countpaths(int  i,int j,vector<vector<int>> &dp){
        if(i==0||j==0) return 1;
        if(dp[i][j]!=-1) return dp[i][j];
        return dp[i][j]=countpaths(i,j-1,dp) + countpaths(i-1,j,dp);
    }
    int uniquePaths(int m, int n) {
        vector<vector<int>> dp(m,vector<int>(n,-1));
        return countpaths(m-1,n-1,dp);
    }
};