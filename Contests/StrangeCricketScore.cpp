#include<bits/stdc++.h>
#include<iostream>
#include<stdlib.h>

using namespace std;

void count_ways(vector<int> &possible_runs, int target_runs, vector<int> &solution, int &solutions){
    if(target_runs<0){
        return;
    }
    if(target_runs==0){
        solutions++;
    }
    
    for(auto it=possible_runs.begin(); it!=possible_runs.end(); it++){
        int temp;
        temp = *it;
        count_ways(possible_runs, target_runs-temp, solution, solutions);
    }
}

int main()
{   
    int t;
    cin>>t;
    vector<int> v ={1,2,3,4,6};
    while(t--){
        int target;
        cin>>target;
        int solutions=0;
        vector<int> solution;
        count_ways(v, target, solution, solutions);
        cout<<solutions<<endl;
    }
}
