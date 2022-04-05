#include<iostream>
#include<map>
#include<string>

using namespace std;
int main(int argc, char const *argv[])
{
    int t;
    cin>>t;
    while(t--){
        map<char, int> m;
        string s;
        int n;
        cin>>n;
        cin>>s;
        for(int i=0; i<n; i++){
            m[s[i]]++;
        }
        if((m['1']==m['0']+1) || (m['1']==m['0']) || (m['1']+1==m['0'])){
            cout<<"YES";
        }
        else{
            cout<<"NO";
        }

    }
    return 0;
}


