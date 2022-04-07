#include<iostream>
#include<vector>

using namespace std;

int floor(vector<int> nums, int target){
    int low = 0, high = nums.size()-1;
    int mid;
    int res=-1;
    while(low<=high){
        mid=(low+high)/2;
        if(nums[mid]<target){
            res = mid;
            low = mid+1;
        }
        else{
            high = mid-1;
        }
    }
    return res;
}

int ceil(vector<int> nums, int target){
    int low = 0, high = nums.size()-1;
    int mid;
    int res=-1;
    while(low<=high){
        mid=(low+high)/2;
        if(nums[mid]>target){
            res=mid;
            high = mid-1;
        }
        else{
            low = mid+1;
        }
    }
    return res;
}

int main(int argc, char const *argv[])
{
    vector<int> a={1,2,3,4,8,10,10,12,19};
    cout<<a[ceil(a, 10)];
    return 0;
}
