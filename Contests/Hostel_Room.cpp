#include<iostream>
#include<bits/stdc++.h>
#include<algorithm>

using namespace std;
// Use Kadane's Algorithm
int main(int argc, char const *argv[])
{
    int t;
    cin>>t;
    while(t--){
        int n, x;
        vector<int> v;
        cin>>n>>x;
        v.push_back(x);
        while(n--){
            int temp;
            cin>>temp;
            v.push_back(temp);
        }

        int sum=0, max_sum=INT_MIN;
        for(int i=0; i<v.size(); i++){
            sum = sum + v[i];
            if(sum>max_sum)max_sum=sum;
            if(sum<0)sum=0;
        }
    cout<<max_sum<<endl;
}
return 0;
}
