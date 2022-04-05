#include<bits/stdc++.h>
#include<iostream>
#include<stdlib.h>

using namespace std;

void subsets(vector<int> &superset, int target, multiset<int> &solution, set<multiset<int>> &solutions){
    if(target<0){
        return;
    }
    if(target==0){
        solutions.insert(solution);
    }
    
    for(auto it=superset.begin(); it!=superset.end(); it++){
        int temp;
        temp = *it;
        superset.erase(it);
        solution.insert(temp);
        subsets(superset, target-temp, solution, solutions);
        solution.erase(temp);
        superset.insert(it, temp);
    }
}

int main(int argc, char const *argv[])
{
    vector<int> v ={1,2,3,4,5,6};
    int target;
    cin>>target;

    set<multiset<int>> solutions;
    multiset<int> solution;

    subsets(v, target, solution, solutions);

    for(auto &rows : solutions){
        for(auto &x : rows){
            cout<<x<<" ";
        }
        cout<<endl;
    }
    return 0;
}
