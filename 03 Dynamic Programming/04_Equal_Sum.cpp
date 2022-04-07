// Determine if a given set is divisible in two subsets of equal sum.
#include<iostream>
#include<vector>
#define v vector

using namespace std;

bool iter_subset_sum(int arr[], int sum, int n, v<v<int>> &dp){
    for(int i=0; i<dp.size(); i++){
        for(int j=0; j<dp[0].size(); j++){
            if(i==0 && j==0) dp[i][j]=1;
            else if(j==0) dp[i][j] = 1;
            else if(i==0) dp[i][j] = 0;
        }
    }

    for(int ni=1; ni<=n; ni++){
        for(int sumj=1; sumj<=sum; sumj++){
            if(arr[ni-1]<=sumj){
                dp[ni][sumj]= (dp[ni-1][sumj-arr[ni-1]] || dp[ni-1][sumj]);
            }
            else dp[ni][sumj] = dp[ni-1][sumj];
        }
    }
    return dp[n][sum];
}

int main(int argc, char const *argv[])
{
    int arr[] = {1,5,5,11};
    int n=4, sum=0;
    
    for(int i=0; i<n; i++){
        sum+=arr[i];
    }
    sum = sum/2;
    v<v<int>> dp(n+1, v<int>(sum+1, -1));
    cout<<iter_subset_sum(arr, sum, n, dp);
    return 0;
}
