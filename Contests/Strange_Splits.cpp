#include<iostream>
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;


int main(int argc, char const *argv[])
{
    int t;
    cin>>t;
    while(t--){
        int n;
        vector<int> arr;
        cin>>n;
        while(n--){
            int temp;
            cin>>temp;
            arr.push_back(temp);
        }
        int flag = 0;
        int a_sum = arr[0];
        for(int i=1; i<arr.size(); i++){
            a_sum+=abs(arr[i]);
        }
        cout<<a_sum<<endl;
    }
    return 0;
}
