#include<math.h>
#include<cmath>
#include<iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int t;
    cin>>t;
    while(t--){
        float n;
        cin>>n;
        float cuts;
        cuts = (-1 + sqrt(1-4*(2-2*n)))/2;
        cout<<ceil(cuts)<<endl;
    }
    return 0;
}

