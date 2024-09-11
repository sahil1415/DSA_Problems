#include<bits/stdc++.h>
using namespace std;

int peakIndexInMountainArray(vector<int> arr){
    int n = arr.size();

    if(n==1)
        return 0;

    if(arr[0]>arr[1])
        return 0;

    if(arr[n-1]>arr[n-2])
        return n-1;

    int low = 1;
    int high = n-2;
    int mid = low + (high - low)/2;
    while(low <= high){
        if(arr[mid]>arr[mid+1] && arr[mid]>arr[mid-1]){
            return mid;
        }
        else if(arr[mid]>arr[mid-1]){
            low = mid +1;
        }
        else{
            high = mid -1;
        }
        mid = low + (high - low)/2;
    }
    return -1;
}

int main(){
    vector<int> v = {1,2,3,4,5,6,7,8,1};
    int i = peakIndexInMountainArray(v);
    cout<<"Peak index of the mountain = "<<i<<endl;
}
