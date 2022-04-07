/* Count the number of subsets possible for a given sum.*/
#include<iostream>
#include<vector>
#define v vector

using namespace std;
int rec_count_subset_sum(int arr[], int sum, int n, v<v<int>> &dp){
    if(dp[n][sum]!=-1) return dp[n][sum];

    if(sum==0 && n==0) return dp[n][sum] = 1;
    else if(sum==0 && n!=0) return dp[n][sum] = 1;
    else if(n==0) return dp[n][sum] = 0;

    if(arr[n-1]<=sum){
        return dp[n][sum] = rec_count_subset_sum(arr, sum-arr[n-1], n-1, dp) + 
                            rec_count_subset_sum(arr, sum, n-1, dp);
    }
    return dp[n][sum]=rec_count_subset_sum(arr, sum, n-1, dp);
}

int iter_count_subset_sum(int arr[], int sum, int n, v<v<int>> &dp){
    for(int i=0; i<dp.size(); i++){
        for(int j=0; j<dp[0].size(); j++){
            if(i==0 && j==0) dp[i][j]=1;
            else if(j==0 && i!=0) dp[i][j] = 1;
            else if(i==0) dp[i][j] = 0;
        }
    }

    for(int i=1; i<dp.size(); i++){
        for(int j=1; j<dp[0].size(); j++){
            if(arr[i-1]<=j) dp[i][j] = dp[i-1][j-arr[i-1]] + dp[i-1][j];
            else dp[i][j] = dp[i-1][j];
        }
    }

    return dp[n][sum];
}
int main(int argc, char const *argv[])
{
    int arr[] = {2,3,4,5,6,8,10};
    int sum = 10;
    int n = 7;
    
    v<v<int>> dp(n+1, v<int>(sum+1, -1));

    cout<<iter_count_subset_sum(arr, sum, n, dp);
    return 0;
}
