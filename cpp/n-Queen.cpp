#include<iostream>
using namespace std;

class Solution{
    public:
vector<vector<int>> ans;

bool isSafe(vector<vector<int>& board, int r, int c,int n){
    for(int i=0; i<r; i++){
        if(board[i][c]==1){
            return false;
        }
    }
     for(int i=r-1; j=c-1; i>=0; && j>=0; i--; j-- ){
        if(board[i][j]==1){
            return false;
        }
    }
     for(int i=r-1; j=c+1; i>=0; && j<n; i--; j++ ){
        if(board[i][j]==1){
            return false;
        }
    }
    return true;
}
    void helper(vector<vector<int>& board, int n, int r){
        if(r==n){
            vector<int> temp;
            for(int i=0; i<n; i++){
                for(int j=0; j<n; j++){
                    if(board[i][j]== 1){
                        temp.push_back(j+1);
                    }
                }
            }
            ans.push_back(temp);
            return;

        }
        for(int i=0; i<n; i++){
            if(isSafe(board,r,i,n)){
                board[r][i]-1;
                helper(board,n,r+1);
                board[r][i]=0;
            }
        }
    }
    vector<vector<int>> nQueens(int n){
        vector<vector<int>> board(n, vector<int>(n,0));

        helper(board , n,r);
        return ans;
}
};