#include<iostream>
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

int main(int argc, char const *argv[])
{
    int t;
    cin>>t;
    while(t--){
        int n, temp;
        vector<int> v;
        cin>>n;
        while(n--){
            cin>>temp;
            v.push_back(temp);
        }
        long long even_s=0, odd_s=0;
        for(int i=0; i<v.size(); i++){
            if(i%2) odd_s+=v[i];
            else even_s+=v[i];
        }
        if(even_s>odd_s){
            cout<<even_s;
        }
        else{
            cout<<odd_s;
        }
        cout<<"\n";
    }
    return 0;
}
