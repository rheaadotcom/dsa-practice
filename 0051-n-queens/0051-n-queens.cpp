class Solution {
public:
vector<vector<string>>ans;
int N;
 unordered_set<int> cols;
    unordered_set<int> diagonals;
    unordered_set<int> antidiagonals;
    void solve(vector<string>& board,int row){
        if(row>=N){
        ans.push_back(board);
        return;
        }
    for(int col=0;col<N;col++){
        int diagonal=row+col;
        int antidiagonal=row-col;    

    if(cols.find(col)!=cols.end() ||diagonals.find(diagonal)!=diagonals.end() ||antidiagonals.find(antidiagonal)!=antidiagonals.end() ){
        continue;
    }    
    cols.insert(col);
    diagonals.insert(diagonal);
    antidiagonals.insert(antidiagonal);
    board[row][col]='Q';
    solve(board,row+1);
    
   
    cols.erase(col);
    diagonals.erase(diagonal);
    antidiagonals.erase(antidiagonal);
    board[row][col]='.';
     
    }
    }
    vector<vector<string>> solveNQueens(int n) {
        N=n;
        vector<string>board(n,string(n,'.'));
        solve(board,0);
        return ans;
    }
};