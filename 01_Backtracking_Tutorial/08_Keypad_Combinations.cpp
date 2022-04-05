#include<bits/stdc++.h>
#include<iostream>
#include<stdlib.h>
using namespace std;
map<char, string> keypad=   {
                            {'2', "abc"}, 
                            {'3', "def"},
                            {'4', "ghi"},
                            {'5', "jkl"},
                            {'6', "mno"},
                            {'7', "pqrs"},
                            {'8', "tuv"},
                            {'9', "wxyz"}
                            };

void solve(string digits, int index, int length, string &curr){
    if(index==length){
       cout<<curr<<endl;
    }
    for(int i=0; i<keypad[digits[index]].length(); i++){
        curr.push_back(keypad[digits[index]][i]);
        solve(digits, index+1, length, curr);
        curr.pop_back();
    }
}

void combinator(string digits){
    string curr = "";
    solve(digits, 0, digits.length(), curr);
}
int main()
{   
    string S="2349";
    string curr ="";
    combinator(S);
    
    return 0;
}


