#include<iostream>
#include<bits/stdc++.h>
#include <vector>
using namespace std;

int nearlySorted(vector<int> &nums, int target){
    int n = nums.size();
    int s = 0;
    int e = n-1;

    while(s <= e){
        int mid = s+(e-s)/2;
        if(nums[mid] == target){
            return mid;
        }
        if(nums[mid+1] == target){
            return mid+1;
        }
        if(nums[mid-1] == target){
            return mid-1;
        }

        if(target > nums[mid]){
            s = mid +1;
        }
        else{
            e = mid - 1;
        }
    }
}
int main(){
    vector<int> v;
    v.push_back(20);
    v.push_back(10);
    v.push_back(30);
    v.push_back(40);
    v.push_back(60);
    v.push_back(50);
    int index  = nearlySorted(v, 20);
    cout<<index;
return 0;
}