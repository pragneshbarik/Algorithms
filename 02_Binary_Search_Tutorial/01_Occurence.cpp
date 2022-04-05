#include<iostream>
#include<vector>

using namespace std;

vector<int> occurence (vector<int> nums, int target){
    int l=0;
    int h=nums.size()-1;
    int res = -1;
    int mid;
    vector<int> ans;
    // For first occurence
    while(l<=h){
        mid = (l+h)/2;
        if(nums[mid]==target){
            h=mid-1;
            res = mid;
        }
        else if(target>nums[mid]){
            l=mid+1;
        }
        else {
            h=mid-1;
        }
    }
    ans.push_back(res);
    l=0; h=nums.size()-1;
    while(l<=h){
        mid = (l+h)/2;
        if(nums[mid]==target){
            l=mid+1;
            res = mid;
        }
        else if(target>nums[mid]){
            l=mid+1;
        }
        else {
            h=mid-1;
        }
    }
    ans.push_back(res);
    return ans;
}