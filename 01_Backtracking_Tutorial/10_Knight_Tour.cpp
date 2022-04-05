
#include<bits/stdc++.h>
#include<iostream>
#include<stdlib.h>

using namespace std;

//Time complexity : (8^(n*n)) NP problem.

bool knight_tour(int moves, int i, int j, vector<vector<int>> &visited){
    if(i>=visited.size() || j>=visited.size() || i<0 || j<0 || visited[i][j]!=-1){
        return false;
    }
    if(moves == visited.size() * visited.size()-1){
        visited[i][j]=moves;
        return true;
    }
    visited[i][j]=moves;
    if(knight_tour(moves+1, i+2, j+1, visited)||
    knight_tour(moves+1, i+2, j-1, visited)||
    knight_tour(moves+1, i+1, j+2, visited)|| 
    knight_tour(moves+1, i+1, j-2, visited)||
    knight_tour(moves+1, i-2, j+1, visited)||
    knight_tour(moves+1, i-2, j-1, visited)||
    knight_tour(moves+1, i-1, j+2, visited)||
    knight_tour(moves+1, i-1, j-2, visited) )
    {return true;}
    visited[i][j]=-1;
    return false;
}

int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    vector<vector<int>> v(n, vector<int> (n, -1));
    knight_tour(0, 0, 0, v);
    for(auto &rows : v){
        for(auto &x : rows){
            cout<<x<<" ";
        }
        cout<<endl;
    }
    return 0;
}
