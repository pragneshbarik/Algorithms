#include<iostream>
#include<vector>


using namespace std;



int word_search(vector<vector<char>> &b, int i, int j, int index, string word){
    static vector<vector<int>> last_visited(b.size(), vector<int> (b[0].size(), 0));
    if(index == word.length()){
        return 1;
    }
    if ( i<0 || j<0 || 
         i>=b.size() || j>=b[0].size() ||
         word[index]!=b[i][j] || last_visited[i][j])
            return 0;

    last_visited[i][j]=1;//do
    if( word_search(b, i+1, j, index+1, word) ||
        word_search(b, i-1, j, index+1, word) ||
        word_search(b, i, j+1, index+1, word) ||
        word_search(b, i, j-1, index+1, word)) //recurse
            return 1;
    last_visited[i][j]=0; //backtrack
    
    return 0;

}

int find(vector<vector<char>> box, string to_find){
   
    for(int i=0; i<box.size(); i++){
        for(int j=0; j<box[0].size(); j++){
            if(word_search(box, i, j, 0, to_find)){
                return 1;
            }
        }
    }
    return 0;
}
int main(int argc, char const *argv[])
{
    vector<vector<char>> box =  {
                                {'A','B','C','E'},
                                {'S','F','C','S'},
                                {'A','D','E','E'}
                                };

    string to_find = "ABCCED";
    int res = find(box, to_find);
    cout<<res;
}

