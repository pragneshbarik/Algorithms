#include<iostream>
#include<vector>
#define v vector
using namespace std;

int rec_knapsack(int wt[], int price[], int cap, int n, v<v<int>> &dp){
    if(n==0 || cap==0){
        return dp[n][cap]=0;
    }
    if(dp[n][cap]!=-1){
        return dp[n][cap];
    }
    if(wt[n-1]<=cap){
        return dp[n][cap] = max(price[n-1] + rec_knapsack(wt, price, cap-wt[n-1], n-1, dp), rec_knapsack(wt, price, cap, n-1, dp));
    }
        return dp[n][cap] = rec_knapsack(wt, price, cap, n-1, dp);   
}

int iter_knapsack(int wt[], int price[], int cap, int n, v<v<int>> &dp){
    for(int i = 0; i<=n; i++){
        dp[i][0]=0;
    }
    for(int i = 0; i<=cap; i++){
        dp[0][i]=0;
    }

    for(int n_i = 0; n_i<=n; n_i++){
        for(int cap_j = 0; cap_j<=cap; cap_j++){
            if(n_i==0 || cap_j == 0) dp[n_i][cap_j]=0;
            else if(wt[n_i]<=cap_j){
                dp[n_i][cap_j] = max((price[n_i] + dp[n_i-1][cap_j-wt[n_i]]), dp[n_i-1][cap_j]);
            }
            else
                dp[n_i][cap_j] = dp[n_i-1][cap_j];
        }
    }

    return dp[n][cap];
}


int main(int argc, char const *argv[])
{
    int wt[] = {1, 3, 4, 5};
    int price[] = {1, 4, 5, 7};
    int n=4, cap=7;
    v<v<int>> dp(n+1, v<int> (cap+1, -1));
    //To maximize profit given constraint of the bag.
    iter_knapsack(wt, price, 7, 4, dp);

    return 0;
}

