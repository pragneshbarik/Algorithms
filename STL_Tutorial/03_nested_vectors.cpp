#include<bits/stdc++.h>
#include<iostream>
#include<stdlib.h>

using namespace std;
int main(int argc, char const *argv[])
{
    //Vector of vectors
    int N;
    cout<<"Enter number of rows : ";
    cin>>N;
    vector<vector<int>> v;
    for(int i=0; i<N; i++){
        int n;
        cout<<"Enter number of elements in row "<<i<<" : ";
        cin>>n;
        vector<int> temp;
        cout<<"Enter elements of row "<<i<<" : ";
        for(int j = 0; j<n; j++){
            int x;
            cin>>x;
            temp.push_back(x);
        }
        v.push_back(temp);
    }

    cout<<endl<<endl;
    for(int i=0; i<v.size(); ++i){
        for(int j=0; j<v[i].size(); j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
