#include<iostream>
#include<vector>

using namespace std;

vector<int> peaks(vector<int> nums){
    int low = 0, high = nums.size()-1;
    int mid;
    vector<int> sol;
    while(low<=high){
        mid=(low+high)/2;
        if(nums[mid]>nums[mid+1] && nums[mid]>nums[mid-1]){
            sol.push_back(mid);
            low=mid+1;
        }
        else if(nums[mid+1]>nums[mid]){
            low=mid+1;
        }
        else if(nums[mid-1]>nums[mid]){
            high=mid-1;
        }
    }
    return sol;
}

int main(int argc, char const *argv[])
{
    vector<int> a={1,2,3,5,2,1,4,1,2,3,4,5,3,4,1,2};
    vector<int> b=peaks(a);
    for(int x:b){
        cout<<x<<" "<<a[x]<<endl;
    }
    return 0;
}
