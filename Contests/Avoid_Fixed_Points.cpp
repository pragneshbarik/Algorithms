#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int t, n, k=0, j=0;
    int *A;
    cin>>t;
    while(t--){
        cin>>n;
        A = new int[n+1];
        A[0] = 0;
        k=0;
        for(int i=1; i<=n; i++){
            cin>>A[i];
        }
        for(int i=1; i<=n; i++){
            if(A[i]==i+k){
                k++;
            }
        }
        cout<<k<<endl;
    }
    return 0;
}


