#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<string, int> map_likes;
    map<string, int> map_dislikes;
    string temp;
    int t;
    cin>>t;
    
    int likes, dislikes;

    while(t--){
        cin>>likes;
        while(likes--){
            cin>>temp;
            map_likes[temp]++;
        }
        cin>>dislikes;
        while(dislikes--){
            cin>>temp;
            map_dislikes[temp]++;
        }
    }

    for(auto &pairs : map_dislikes)
        if(map_likes.find(pairs.first)!=map_likes.end())
            if(map_likes[pairs.first]<=pairs.second)
                map_likes.erase(pairs.first);

    cout<<map_likes.size()<<" ";

    for(auto &x : map_likes){
        cout<<x.first<<" ";
    }
    return 0;
}
