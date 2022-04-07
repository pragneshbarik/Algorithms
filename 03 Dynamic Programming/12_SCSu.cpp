//SCSu :  Shortest Common Supersequence
#include<iostream>
#include<vector>
#include<string>

using namespace std;

/*
    Logic : 
        * SCSu(X, Y) = X + Y - LCS(X, Y)

*/



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

int main(int argc, char const *argv[])
{
    string x = "AGGTAB";
    string y = "GXTXAYB";

    cout<<x.length() + y.length() - iter_lcs(x, y)[x.length()][y.length()];
    return 0;
}

    
    
    
    
    
    
    
    