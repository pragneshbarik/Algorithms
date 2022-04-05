#include<iostream>
#include<bits/stdc++.h>
#include<algorithm>


using namespace std;
bool valid_counts(map<int, int> &m){
    for(auto &x:m){
        if(x.second<1){
            return false;
        }
    }
    return true;
}
int main(int argc, char const *argv[])
{
    int t;
    cin>>t;
    while(t--){
        vector<int> v;
        int n;
        cin>>n;
        int sum=0;
        for(int i=0;  i<2*n; i++){
            int temp;
            cin>>temp;
            sum+=temp;
        }
        // map<int, int> counts;
        // for(auto &x : v){
        //     counts[x]=0;
        // }
        // for(int i=0; i<v.size(); i++){
        //     for(int j=i+1; j<v.size(); j++){
        //         if((v[i]+v[j])%2==0){
        //             counts[v[i]]++;
        //         }
        //     }
        // }

        if(sum%2==0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    
    }
    
    return 0;
}
