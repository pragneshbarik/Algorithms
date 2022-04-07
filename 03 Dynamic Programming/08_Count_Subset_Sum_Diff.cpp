#include<iostream>
#include<vector>
#define v vector

using namespace std;

/* Find the number of ways of partitioning a set into two subsets such that difference of their sums is equal to a given difference.
    * For example :  
    * arr[] = {1,1,2,3}, diff = 1
    * Possible Solutions = 3 ; {{1,3}, {1,1,2}, {1,3}}
    * Logic :
        * S1 - S2 = diff --- (1)
        * S1 + S2 = S --- (2)
        * 2*S1 = diff + S --- (1) + (2)
        * S1 = (diff + S)/2 
    * The problem reduces to count subset sum problem, with target sum = (diff + S)/2
*/


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
    int arr[] = {1,1,2,3};
    int n = 4;
    int diff = 1;
    int sum = 0;
    for(int i=0; i<n; i++) sum+=arr[i];
    int target = (diff + sum)/2;
    vector<vector<int>> dp(n+1, vector<int> (target+1, -1));
    cout<<iter_count_subset_sum(arr, target, n, dp);  
    return 0;
}
