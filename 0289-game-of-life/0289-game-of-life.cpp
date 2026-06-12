class Solution {
public:
    int solve(vector<vector<int>> board,int x,int y){
        int m=board.size();
        int n=board[0].size();
        int directions[8][2]={{0,1},{1,1},{1,0},{1,-1},{0,-1},{-1,-1},{-1,0},{-1,1}};
        int count=0;
        for(auto& dir:directions){
            int nx=x+dir[0];
            int ny=y+dir[1];
            if(nx>=0&&nx<m&&ny>=0&&ny<n){
                count+=board[nx][ny];
            }
        }
        return count;
    }
    void gameOfLife(vector<vector<int>>& board) {
        int m=board.size();
        int n=board[0].size();
        vector<vector<int>> copy=board;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                int live=solve(copy,i,j);
                if(copy[i][j]==1&&(live<2||live>3)){
                    board[i][j]=0;
                }
                if(copy[i][j]==0&&live==3){
                    board[i][j]=1;
                }
            }
        }
    }
};