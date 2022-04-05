#include<iostream>
#include<map>
#include<string>

using namespace std;
int main(int argc, char const *argv[])
{
    int t, n;
    string s;
    map<char, int> count;

    cin>>t;
    while(t--){
        cin>>n;
        cin>>s;
        count['1']=0, count['0']=0;
        if(n%2){
            cout<<"YES"<<endl;
        }
        else{
            for(int i=0; i<n; i++){
                count[s[i]]++;
            }
            if((count['1']%2==0) && (count['0']%2==0))
                cout<<"YES"<<endl;
            else if(count['1']==count['0'])
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }
        
    }
    return 0;
}
