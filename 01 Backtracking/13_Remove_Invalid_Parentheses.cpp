#include<bits/stdc++.h>
#include<iostream>
#include<stdlib.h>
using namespace std;

bool valid_brackets(string s){
    stack<char> stk;
    for(int  i=0; s[i]!='\0'; i++){
        if(s[i]=='('){
            stk.push('(');
            continue;
        }
        else if(s[i]==')'){
            if(stk.empty()){
                return false;
            }
            stk.pop();
        }
    }
    return (stk.empty());
}

void remove_invalid(string str, set<string> &solutions){
    if(valid_brackets(str)){
        solutions.insert(str);
        return;
    }

    for(auto it=str.begin(); it!=str.end(); it++){
        if(*it==')' && !valid_brackets(str)){
            str.erase(it);
            remove_invalid(str, solutions);
            str.insert(it, ')');
        }
    }
}

int main(int argc, char const *argv[])
{
    string s = "(a";
    set<string> sol;
    remove_invalid(s, sol);
    for(auto &words : sol){
        cout<<words<<endl;
    }
}
