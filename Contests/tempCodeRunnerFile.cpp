#include<iostream>
#include<vector>
#include<string>

using namespace std;

void brackets(vector<string> &solutions, string &curr, int open, int close, int n){
    if(curr.length()==2*n){
        solutions.push_back(curr);
    }
    if(open<n){
        curr.push_back('(');
        brackets(solutions, curr, open+1, close, n);
        curr.pop_back();
    }
    if(close<open){
        curr.push_back(')');
        brackets(solutions, curr, open, close+1, n);
        curr.pop_back();
    }
}

int main(int argc, char const *argv[])
{
    system("cls");
    vector<string> valid_brackets;
    string current;
    int n;
    cin>>n;
    brackets(valid_brackets, current, 0, 0, n);
    for(auto &s:valid_brackets)
        cout<<s<<endl;
    return 0;
}
