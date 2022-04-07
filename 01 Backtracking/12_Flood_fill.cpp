#include<bits/stdc++.h>
#include<iostream>
#include<stdlib.h>
using namespace std;

void flood_fill(vector<vector<int>> &image, int i, int j, int color, int newcolor){
    if(i>=image.size() || j>=image[0].size() || image[i][j]!=color || i<0 || j<0){
        return;
    }
    image[i][j]=newcolor;
    flood_fill(image, i+1, j, color, newcolor);
    flood_fill(image, i-1, j, color, newcolor);
    flood_fill(image, i, j+1, color, newcolor);
    flood_fill(image, i, j-1, color, newcolor);
    return;
}

int main(int argc, char const *argv[])
{
    vector<vector<int>> image= { 
                            {1, 1, 1},
                            {1, 1, 0},
                            {1, 0, 1}
                        };
    vector<vector<int>> v(3, vector<int> (3));                  
    flood_fill(image, 0, 0, 1, 4);
    for(auto &x : image){
        for(auto &y : x){
            cout<<y<<" ";
        }
        cout<<endl;
    }
    return 0;
}
