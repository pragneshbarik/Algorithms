/* In Unbounded Knapsack there is no limitation on choosing a item.*/
#include<iostream>
#include<vector>
#define v vector

//2D Unbounded Knapsack
using namespace std;
int rec_u_knapsack(int wt[], int price[], int cap, int n, v<v<int>> &dp){
    if(dp[n][cap]!=-1) return dp[n][cap];
    if(cap==0 || n==0) return dp[n][cap]=0;
    if(wt[n-1]<=cap){
        int take = price[n-1]+rec_u_knapsack(wt, price, cap-wt[n-1], n, dp);
        int notake = rec_u_knapsack(wt, price, cap, n-1, dp);
        return dp[n][cap]=max(take, notake);
    }
    return dp[n][cap]=rec_u_knapsack(wt, price, cap, n-1, dp);
}

int iter_u_knapsack(int wt[], int price[], int cap, int n, v<v<int>> &dp){
    for(int n_i = 0; n_i<=n; n_i++){
        for(int cap_j = 0; cap_j<=cap; cap_j++){
            if(n_i==0 || cap_j == 0) dp[n_i][cap_j]=0;
            else if(wt[n_i]<=cap_j){
                dp[n_i][cap_j] = max((price[n_i] + dp[n_i][cap_j-wt[n_i]]), dp[n_i-1][cap_j]);
            }
            else
                dp[n_i][cap_j] = dp[n_i-1][cap_j];
        }
    }

    return dp[n][cap];
}

int main(int argc, char const *argv[])
{
    int price[] = {10, 40, 50, 70};
    int wt[]  = {1, 3, 4, 5};
    int cap = 8, n=4;
    v<v<int>> dp(n+1, v<int> (cap+1, -1));

    cout<<iter_u_knapsack(wt, price, cap, n, dp);
    return 0;
}
