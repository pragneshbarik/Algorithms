/* Problem statement : Find if there exist a subset in given array when summed is equal to target sum */
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
    else if(n==0) return false;

    if(arr[n-1]<=sum)
        return dp[n][sum] = (rec_subset_sum(arr, sum-arr[n-1], n-1, dp) || rec_subset_sum(arr, sum, n-1, dp));
    
    return dp[n][sum] = rec_subset_sum(arr, sum, n-1, dp);
}

int main(int argc, char const *argv[])
{
    int arr[] = {2, 3, 7, 8, 10};
    int n=5, sum = 11;
    v<v<int>> dp(n+1, v<int>(sum+1, -1));
    rec_subset_sum(arr, sum, 5, dp);
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


