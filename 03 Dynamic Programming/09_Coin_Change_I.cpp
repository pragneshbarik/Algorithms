#include<iostream>
#include<vector>
#define v vector

using namespace std;

int count_coin(int coins[], int sum, int n, v<v<int>> &dp){
    if(dp[n][sum]!=-1) return dp[n][sum];
    else if(sum==0 && n==0) return dp[n][sum]=1;
    else if(sum==0 && n!=0) return dp[n][sum]=1;
    else if(sum!=0 && n==0) return dp[n][sum]=0;
    
    if(coins[n-1]<=sum)
    return dp[n][sum]= count_coin(coins, sum-coins[n-1], n, dp) + count_coin(coins, sum, n-1, dp);
    return dp[n][sum]= count_coin(coins, sum, n-1, dp);
}

int main(int argc, char const *argv[]){
    int arr[]={1,2,5};
    int n = 3, sum =11;
    vector<vector<int>> dp(n+1, vector<int> (sum+1, -1));
    cout<<count_coin(arr,11, n, dp);
    return 0;
}
