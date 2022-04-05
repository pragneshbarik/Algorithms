#include<bits/stdc++.h>
#include<iostream>
#include<stdlib.h>
using namespace std;



void word_breaker(string word, unordered_set<string> &dict, unordered_set<string> &solutions){
    if(word.length()<1){
        return;
    }
    if(dict.find(word)!=dict.end()){
        solutions.insert(word);
    }
    for(int i=0; i<word.length(); i++){
        for(int j=i+1; j<word.length(); j++){
            word_breaker(word.substr(i, j), dict, solutions);
        }
    }
}

int main()
{
    unordered_set<string> dict = {"micro","soft", "hi", "ring", "microsoft", "hiring"};
    //unordered_set<string> dict = {"mobile","samsung","sam","sung","man","mango","icecream","and","go","i","like","ice","cream"};
    string word = "microsoft";
    unordered_set<string> solutions;
    word_breaker(word, dict, solutions);
    for(auto &x : solutions){
        cout<<x<<" ";
    }
    return 0;
}


