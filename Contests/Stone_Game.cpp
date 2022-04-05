#include<iostream>
#include<bits/stdc++.h>
#include<algorithm>

using namespace std;
//Wrong Solution
//Use Greedy Algorithm
int main(int argc, char const *argv[])
{
    int t;
    cin>>t;
    while(t--){
        int n;
        string alice, bob;
        cin>>n;
        cin>>alice;
        cin>>bob;
        sort(alice.begin(), alice.end());
        sort(bob.begin(), bob.end());
        reverse(bob.begin(), bob.end());
        string solution;
        for(int i=0; i<n; i++){
            solution+=(alice[i]);
            solution+=(bob[i]);
        }
        cout<<solution<<endl;

    }
    return 0;
}
