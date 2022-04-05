#include<iostream>
#include<vector>

using namespace std;

vector<vector<int>> visited(7, vector<int>(7));

bool isSafe(vector<vector<int>> &maze, int i, int j){
    if(i<maze.size() && j<maze[0].size() && maze[i][j] && !visited[i][j]){
        return true;
    }
    return false;
}

bool move(vector<vector<int>> &maze, int i, int j){
    if(i == maze.size()-1 && j == maze[0].size()-1){
        visited[i][j]=1;
        return true;
    }

    if(isSafe(maze, i, j)){
        visited[i][j]=1;
        if(move(maze, i+1, j)){
            return true;
            visited[i][j]=0;
        }
        if(move(maze, i, j+1)){
            return true;
            visited[i][j]=0;
        }
        
        return false;
    }
    return false;
}

int main(int argc, char const *argv[])
{
    vector<vector<int>> maze =   {
                                    { 1, 1, 0, 0, 0, 1, 1},
                                    { 0, 1, 1, 1, 1, 1, 1},
                                    { 1, 0, 0, 1, 0, 1, 1},
                                    { 0, 1, 1, 1, 0, 0, 1},
                                    { 0, 1, 0, 1, 1, 1, 1},
                                    { 0, 1, 0, 0, 1, 0, 0},
                                    { 1, 0, 1, 1, 1, 1, 1}
                                };
                
    if(move(maze, 0, 0)){
        for(int i=0; i<7; i++){
            for(int j=0; j<7; j++){
                cout<<visited[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}