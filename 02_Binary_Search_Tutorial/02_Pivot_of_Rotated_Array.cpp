//Pivot of  Rotated sorted array.
#include<iostream>
#include<vector>
using namespace std;

int find_pivot(vector<int> nums){
    int low = 0, high = nums.size()-1, mid;
    while(low<=high){
        mid = (low+high)/2;
        
        if(nums[mid]<nums[mid-1] && nums[mid]<nums[mid+1]) 
            return mid;
        
        else if(nums[mid]>nums[nums.size()-1]){
            low=mid+1;
        }
        else {
            high=mid-1;
        }
    }
    return  0;
}
int main(int argc, char const *argv[])
{
    vector<int> v = {8, 10, 12, 14, 16, 2, 4, 6}, a = {4,5,6,7,0,1,2};
    cout<<a[find_pivot(a)];

    return 0;
}
