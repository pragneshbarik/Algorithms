#include<bits/stdc++.h>
#include<iostream>
#include<stdlib.h>

using namespace std;

int main(int argc, char const *argv[])
{
    set<string>  s;
    s.insert("abc");
    s.insert("pab");
    s.insert("xin");
    auto it = s.find("abc"); //returns pointer for key "abc", 
                             //returns s.end() if not found.
    for(string x : s)
        cout<<x<<endl;

return 0;
}

