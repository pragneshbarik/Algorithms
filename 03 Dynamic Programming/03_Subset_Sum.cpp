#include<iostream>
#include<vector>
#define v vector

using namespace std;

bool rec_subset_sum(int arr[], int sum, int n, v<v<int>> &dp){
    if(dp[n][sum]!=-1){
        return dp[n][sum];
    }

    if(n==0 && sum==0) return dp[n][sum] = true;
    else if(sum==0) return dp[n][sum] = true;
    else if(n==0) return dp[n][sum] = false;

    if(arr[n-1]<=sum)
        return dp[n][sum] = (rec_subset_sum(arr, sum-arr[n-1], n-1, dp) || rec_subset_sum(arr, sum, n-1, dp));
    
    return dp[n][sum] = rec_subset_sum(arr, sum, n-1, dp);
}

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
    int arr[] = {2, 3, 7, 8, 10};
    int n=5, sum = 11;
    v<v<int>> dp(n+1, v<int>(sum+1, -1));
    iter_subset_sum(arr, sum, 5, dp);
    for(int i=0; i<dp.size(); i++){
        for(int j=0; j<dp[0].size(); j++){
            if(dp[i][j]==1) cout<<"T ";
            else if(dp[i][j]==0) cout<<"F ";
            else if(dp[i][j]==-1) cout<<"V ";
        }
        cout<<"\n";
    }
    return 0;
}


