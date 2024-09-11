#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool searchRotated(vector<int>& arr, int n, int target){
    int low = 0;
    int high = n-1;
    int mid = low + (high - low)/2;
    while(low <= high){
        if(arr[mid] == target){
            return true;
        }
        if(arr[mid]==arr[low] && arr[mid]==arr[high]){
            low++;
            high--;
        }
        if(arr[low] <= arr[mid]){
            // that implies left side of the array is sorted
            if(target>=arr[low] && target<= arr[mid]){
                high = mid -1;
            }
            else{
                low = mid+1;
            }
        }
        else{
            // right side of the array is sorted
            if(target>=arr[mid] && target <=arr[high]){
                low = mid +1;
            }
            else{
                high = mid -1;
            }
        }
        mid = low + (high - low)/2;
    }
    return false;
}
int main(){
    vector<int> v = {1,0,1,1,1};
    bool i  =searchRotated(v,5,9 );
    cout<<" Element present or not = "<<i;
}