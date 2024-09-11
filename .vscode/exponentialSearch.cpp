#include <vector>
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int binary_search(vector<int> &nums, int l, int h, int target){
    while(l <= h){
        int mid = l + (h - l)/2;
        if(nums[mid] == target){
            return mid;
        }
        else if(target > nums[mid]){
            l = mid + 1;
        }
        else{
            h = mid - 1;
        }
    }
    return -1;
}
int exponential_search(vector<int> &nums, int target){
    int n = nums.size();
    if(nums[0] == target){
        return 0;
    }
    int i = 1;
    while(i < n && nums[i] < target){
        i = i*2;
    }
    return binary_search(nums, i/2, min(i, n-1), target);
}
int main()
{
    vector<int> v = {1,3,5,7,9,10,23,45,66,89,200};
    int index = exponential_search(v, 200);
    cout<<"index = "<<index<<" "<<"value = "<<v[index];
return 0;
}