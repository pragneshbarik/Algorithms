//LCSS : Longest Common Substring
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;

int iter_lcss(string x, string y){
    int n = x.length();
    int m = y.length();

    vector<vector<int>> dp(n+1, vector<int> (m+1));

    for(int i=0; i<n+1; i++) dp[i][0] = 0;
    for(int i=0; i<m+1; i++) dp[0][i] = 0;

    for(int i=1; i<n+1; i++){
        for(int j=1; j<m+1; j++){
            if(x[i-1]==y[j-1]) dp[i][j] = 1 + dp[i-1][j-1];
            else dp[i][j] = 0;
        }
    }
    return dp[n][m];
}
