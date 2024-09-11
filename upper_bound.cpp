#include<iostream>
#include<bits/stdc++.h>
using namespace std;
// smallest index such that the number at that index is greater than or 
// equal to the given number
int lowerBound(vector<int> &nums, int target){
    int l = 0;
    int h = nums.size()-1;
    int ans = h;
    while(l <= h){
        int mid = l + (h - l)/2;

        if(nums[mid] >= target){
            ans = mid;
            h = mid - 1;
        }
        else{
            l = mid + 1;
        }
    }
    return ans;
}
// smallest index such that the number at that index is greater than the given number
int upperBound(vector<int> &nums, int target){
    int l = 0;
    int h = nums.size() - 1;
    int ans  = h;
    while(l <= h){
        int mid = l + (h-l)/2;

        if(nums[mid] > target){
            ans = mid;
            h = mid - 1;
        }
        else{
            l = mid + 1;
        }
    }
    return ans;
}
int main()
{
    vector<int> v = {1,1,1,2,2,2,2,3,3,5,5,5,6,6,6};
    int target = 0;
    int lower_bound = lowerBound(v, target);
    cout<<lower_bound<<" "<<v[lower_bound]<<endl;

    int upper_bound = upperBound(v, target);
    cout<<upper_bound<<" "<<v[upper_bound];
return 0;
}