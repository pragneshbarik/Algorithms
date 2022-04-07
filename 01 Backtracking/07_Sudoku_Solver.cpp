#include<iostream>
#include<vector>

using namespace std;

bool conflict(vector<vector<int>> &sudoku, int row, int col, int n){
    if(sudoku[row][col]==0){
        for(int j=0; j<sudoku.size(); j++){
            if(sudoku[row][j]==n)
                return true;
        }
        for(int i=0; i<sudoku.size(); i++){
            if(sudoku[i][col]==n)
                return true;
        }
        int grid_x, grid_y;
        grid_x = row/3;
        grid_y = col/3;
        for(int i=3*grid_x; i<3*grid_x + 3; i++){
            for(int j=3*grid_y; j<3*grid_y + 3; j++){
                if(sudoku[i][j]==n){
                    return true;
                }
            }
        }
    }
    return false;

}

bool solve(vector<vector<int>> &sudoku){
    for(int i=0; i<sudoku.size(); i++){
        for(int j=0; j<sudoku.size(); j++){
            if(sudoku[i][j]==0){
                for(int k=1; k<10; k++){
                    if(!conflict(sudoku, i, j, k)){
                        sudoku[i][j]=k;
                        if(solve(sudoku)){
                            return true;
                        }
                        sudoku[i][j]=0;
                    }
                }
                return false;
            }
        }
    }
    return true;
}


int main(int argc, char const *argv[])
{
    vector<vector<int>> sudoku = { 
                    { 3, 0, 6, 5, 0, 8, 4, 0, 0 },
                    { 5, 2, 0, 0, 0, 0, 0, 0, 0 },
                    { 0, 8, 7, 0, 0, 0, 0, 3, 1 },
                    { 0, 0, 3, 0, 1, 0, 0, 8, 0 },
                    { 9, 0, 0, 8, 6, 3, 0, 0, 5 },
                    { 0, 5, 0, 0, 9, 0, 6, 0, 0 },
                    { 1, 3, 0, 0, 0, 0, 2, 5, 0 },
                    { 0, 0, 0, 0, 0, 0, 0, 7, 4 },
                    { 0, 0, 5, 2, 0, 6, 3, 0, 0 } 
                    };
    
    solve(sudoku);

    for(auto &rows : sudoku){
        for(auto &x : rows){
            cout<<x<<" ";
        }
        cout<<endl;
    }
    return 0;
}
