#include<iostream>
#include<string>
#include<vector>
using namespace std;

vector<string> solutions;
void permuter(string &word, int l, int h){
    if(l==h){
        solutions.push_back(word);
    }
    else{
        for(int i=l; i<=h; i++){
            swap(word[i], word[l]);
            permuter(word, l+1, h);
            swap(word[i], word[l]);
        }
    }
}

int main(int argc, char const *argv[])
{   string word = "BOAT";
    permuter(word, 0, word.length()-1);
    
    for(auto &x : solutions){
        cout<<x<<endl;
    }
    
}
