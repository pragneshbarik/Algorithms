#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int t, a, b, x, y;
    cin>>t;
    while(t--){
        cin>>a>>b>>x>>y;
    
    if(x*y>=a*b)
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;
    }
    return 0;
}
