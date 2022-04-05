#include<bits/stdc++.h>
#include<iostream>
#include<stdlib.h>

using namespace std;

int main()
{
    // Maps are key value pairs, maps are not continous in nature
    system("cls");
    map<int, string> m;
    m[1]="abc";
    m[2]="pragnesh";
    m.insert(make_pair(7, "nero"));
    m[4]="zero";
    m.insert({5, "one"});

    //Accessing map elements 
    map<int, string>:: iterator it;
    for(it = m.begin(); it!=m.end(); it++){
        cout<<it->first<<" "<<it->second<<endl;
    }

    //Accessing using auto keywork
    for(auto iter = m.begin(); iter!=m.end(); iter++){
        cout<<iter->first<<" "<<iter->second<<endl;
    }

    //Accessing using range loops
    for(auto &pr : m){
        cout<<pr.first<<" "<<pr.second<<endl;
    }

    //Size of Map
    cout<<m.size()<<endl;

    //find method returns pointer address of key value pair
    auto f = m.find(2);
    if(f!=m.end())
        cout<<f->first<<" "<<f->second;
    else
        cout<<"Not found";

    //erase method takes key or pointer to key value pair and erases
    f=m.find(2);
    m.erase(f);
    //or
    m.erase(2);
    return 0;
}
