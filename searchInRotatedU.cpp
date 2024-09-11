#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int searchRotated(vector<int>& arr, int n, int target){
    int low = 0;
    int high = n-1;
    int mid = low + (high - low)/2;
    while(low <= high){
        if(arr[mid] == target){
            return mid;
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
    return -1;
}
int main(){
    vector<int> v = {5,6,7,8,9,10,1,2,3};
    int i = searchRotated(v,9,1 );
    cout<<"Index of the smallest element is = "<<i;
}