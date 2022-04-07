//LCS : Longest Common Subsequence
#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

int rec_lcs(string x, string y, int m, int n){
    if(m==0 || n==0) return 0;
    if(x[m-1]==y[n-1]) return 1 + rec_lcs(x, y, m-1, n-1);
    return max(rec_lcs(x, y, m-1, n), rec_lcs(x, y, m, n-1));
}

vector<vector<int>> iter_lcs(string x, string y){
    int n = x.length();
    int m = y.length();

    vector<vector<int>> dp(n+1, vector<int> (m+1));

    for(int i=0; i<n+1; i++) dp[i][0] = 0;
    for(int i=0; i<m+1; i++) dp[0][i] = 0;

    for(int i=1; i<n+1; i++){
        for(int j=1; j<m+1; j++){
            if(x[i-1]==y[j-1]) dp[i][j] = 1 + dp[i-1][j-1];
            else dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
        }
    }
    return dp;
}

void print_lcs(string x, string y, vector<vector<int>> dp){
    int n = x.length();
    int m = y.length();
    string ans="";

    while(n>0 && m>0){
        if(x[n-1]==y[m-1]) {
            ans.push_back(x[n-1]);
            n--, m--;
            }
        else{
            if(dp[n][m-1]>dp[n-1][m]) m--;
            else n--;
        }
    }
    reverse(ans.begin(), ans.end());
    cout<<ans;
}


int main(int argc, char const *argv[]){
    string x = "abcdgh";
    string y = "abedfhr";
    print_lcs(x, y, iter_lcs(x,y));
    return 0;
}
