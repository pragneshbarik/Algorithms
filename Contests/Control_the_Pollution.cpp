#include<iostream>
#include<bits/stdc++.h>
#include<algorithm>

using namespace std;

int main(int argc, char const *argv[])
{
    int t;
    cin>>t;
    while(t--){
        int n, x, y;
        cin>>n>>x>>y;
        int p, smoke;
        int min=INT_MAX;
        for(p=0; p<=n; p++){
            if(p%100==0 && (n-p)%4==0){
                smoke = (p*x)/100 + (n-p)*y/4;
            }
            else if(p%100!=0 && (n-p)%4==0){
                smoke = ((p/100) + 1)*x + (n-p)*y/4;
            }
            else if(p%100==0 && (n-p)%4!=0){
                smoke = ((p/100))*x+ ((n-p)/4 + 1)*y;
            }
            else if(p%100!=0 && (n-p)%4!=0){
                smoke = ((p/100) + 1)*x+ ((n-p)/4 + 1)*y;
            }
            if(smoke<min){
                min=smoke;
            }
        }
        cout<<min<<endl;
    }
    return 0;
}
