#include<iostream>
#include<string>
#include<map>

using namespace std;
int main(int argc, char const *argv[])
{   
    map<char, int> counter;
    int t, x, carlson_points, chef_points;
    string s;
    cin>>t;
    while(t--){
        counter['C']=0;
        counter['D']=0;
        counter['N']=0;
        cin>>x;
        cin>>s;
        for(int i=0; s[i]!='\0'; i++){
            counter[s[i]]++;
        }
        carlson_points = 2*counter['C'] + counter['D'];
        chef_points = 2*counter['N'] + counter['D'];
        
        //cout<<carlson_points<<" "<<chef_points<<endl;
        if(carlson_points>chef_points)
            cout<<60*x<<endl;
        else if(carlson_points == chef_points)
            cout<<55*x<<endl;
        else 
            cout<<40*x<<endl;
    }
    return 0;
}
