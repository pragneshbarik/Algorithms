/*
#include<iostream>
#include<vector>

using namespace std;

bool conflict(vector<vector<int>> &board, int row, int col){
    for(int j=0; j<board.size(); j++){
        if(board[row][j]){
            return true;
        }
    }
    for(int i=0; i<board.size(); i++){
        if(board[i][col]){
            return true;
        }
    }
    for(int i=row, j=col; (i<board.size() && j<board.size()); i++, j++){
        if(board[i][j]){
            return true;
        }
    }
    for(int i=row, j=col; i>=0 && j>=0; i--, j--){
        if(board[i][j]){
            return true;
        }
    }
    for(int i=row, j=col; i>=0 && j<board.size(); i--, j++){
        if(board[i][j]){
            return true;
        }
    }
    for(int i=row, j=col; i<board.size() && j>=0; i++, j--){
        if(board[i][j]){
            return true;
        }
    }

    return false;
}

bool solve(vector<vector<int>> &board, int j){
    if(j==board.size()){
        return true;
    }
    for(int i=0; i<board.size(); i++){
        if(!conflict(board, i, j)){
            board[i][j]=1; //do
            if(solve(board, j+1)){ //recurse
                return true;
            }
            board[i][j]=0; //backtrack
        }
    }
    return false;
}

int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    vector<vector<int>> board(n, vector<int>(n));
    if(solve(board, 0)){
        for(auto &rows : board){
            for(auto &x : rows){
                cout<<x<<' ';
            }
            cout<<endl;
        }
    }
    return 0;
}
*/

#include<iostream>
#include<vector>

using namespace std;

bool conflict(vector<vector<int>> &board, int row, int col){
    for(int j=0; j<board.size(); j++){
        if(board[row][j]){
            return true;
        }
    }
    for(int i=0; i<board.size(); i++){
        if(board[i][col]){
            return true;
        }
    }
    for(int i=row, j=col; (i<board.size() && j<board.size()); i++, j++){
        if(board[i][j]){
            return true;
        }
    }
    for(int i=row, j=col; i>=0 && j>=0; i--, j--){
        if(board[i][j]){
            return true;
        }
    }
    for(int i=row, j=col; i>=0 && j<board.size(); i--, j++){
        if(board[i][j]){
            return true;
        }
    }
    for(int i=row, j=col; i<board.size() && j>=0; i++, j--){
        if(board[i][j]){
            return true;
        }
    }

    return false;
}

bool solve(vector<vector<int>> &board, int j){
    if(j==board.size()){
        return true;
    }
    for(int i=0; i<board.size(); i++){
        if(!conflict(board, i, j)){
            board[i][j]=1;
            if(solve(board, j+1)){
                return true;
            }
            board[i][j]=0;
        }
    }
    return false;
}

int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    vector<vector<int>> board(n, vector<int> (n));
    solve(board,0);
    for(auto &rows : board){
        for(auto &x : rows){
            cout<<x<<" ";
        }
        cout<<endl;
    }
    return 0;
}
