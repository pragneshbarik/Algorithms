#include<iostream>
#include<vector>

using namespace std;
 /* To partition a set into two that difference between their sums is minimum
        *  S = S1 + S2  ----- Eq(1)
        * To find min(S1 - S2)
        * Now, min(S1 - S2) = min(S - 2*S2) ; from Eq(1)
        * Therefore to minimise min(S - 2*S2) maximize S2
        * Range of S2 is [0, S/2]
    */

int min_diff(int arr[], int n){
    int sum = 0;
    for(int i=0; i<n; i++){
        sum+=arr[i];
    }

    vector<vector<int>> dp(n+1, vector<int> (sum+1, 0));

    for(int i=0; i<n+1; i++){
        for(int j=0; j<sum+1; j++){
            if(i==0 && j==0) dp[i][j] = 1;
            else if(i!=0 && j==0) dp[i][j] = 1;
            else if(i==0 && j!=0) dp [i][j] = 0;
        }
    }

    for(int i=1; i<n+1; i++){
        for(int j=1; j<sum+1; j++){
            if(arr[i-1]<=j){
                dp[i][j] = (dp[i-1][j-arr[i-1]] || dp[i-1][j]);
            }
            else
                dp[i][j] = dp[i-1][j];
        }
    }
    int s2;
    for(int i=0; i<=sum/2; i++){
        if(dp[n][i] == 1) s2 = i;
    }
    for(auto row : dp){
        for(int x : row){
            cout<<x<<" ";
        }
        cout<<endl;
    }
    return (sum-2*s2);
}

int main(int argc, char const *argv[])
{
    int arr[] = {1,2,7};
    int n = 3;
    cout<<min_diff(arr, n);
    return 0;
}
