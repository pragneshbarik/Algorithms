#include<iostream>
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

int main(int argc, char const *argv[])
{
    int t;
    cin>>t;
    while(t--){
        int bike, car;
        cin>>bike>>car;
        if(bike<car){
            cout<<"BIKE"<<endl;
        }
        else if(car<bike){
            cout<<"CAR"<<endl;
        }
        else{
            cout<<"SAME"<<endl;
        }
    }
    return 0;
}

