#include<iostream>
#include<string>
#include<vector>

using namespace std;
void subsequence(string word, string output){
    if(word.length()==0){
        cout<<output<<endl;
        return;
    }
    subsequence(word.substr(1), output);
    subsequence(word.substr(1), output + word[0]);

}

int main(int argc, char const *argv[])
{   
    vector<string> sols;
    string a="PRAGNESH";
    subsequence(a, "");
}
