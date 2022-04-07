#include<bits/stdc++.h>
#include<iostream>
#include<stdlib.h>

using namespace std;

void display(vector<int> &v){
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
int main(int argc, char const *argv[])
{   //Vectors are dynamic in nature.
    
    //Declaration
    vector <int> v1;
    int n, x;
    cin>>n;

    //Initialization
    vector <int> zeros(5);     // 0 0 0 0 0
    vector <int> threes(5, 3); // 3 3 3 3 3

    //Input
    for(int i=0; i<n; i++){
        cin >> x;
        v1.push_back(x);
    }

    //Delete the last back
    v1.pop_back();

    //Copy without passing reference, O(n)
    vector <int> v2;
    v2 = v1;

   /* Try to pass arguments as reference as copying is
      expensive operation for eg: display(vector<int> &v){...} */

    //Changing v2 doesn't change v1.

   
    //Vectors of pairs
    vector<pair<char, int>> v = {{'a', 1}, {'b', 2}, {'c', 3}};
    cin>>n;
    for(int i=0; i<n; i++){
        int x, y;
        cin>>x>>y;
        v.push_back({x, y});
    }

    return 0;
}
