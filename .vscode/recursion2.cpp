#include <climits>
#include <climits>
#include<iostream>
using namespace std;

void printarray(int arr[], int n, int index){
    //Base case
    if(index == n){
        return;
    }
    // processing
    cout<<arr[index]<<" ";
    // Recursive relation
    printarray(arr, n, index+1);
}

bool searchArray(int arr[], int n, int index, int target){
    if(index >= n){
        return false;
    }
    if(arr[index] == target){
        return true;
    }

    return searchArray(arr,n,index+1, target);
}

int maximumNumber(int arr[], int n, int index, int max){
    if(index >= n){
        return max;
    }
    if(arr[index] > max){
        max = arr[index];
    }
    return maximumNumber(arr, n, index+1, max);
}

int minimumNumber(int arr[], int n, int index){
    if(index >= n){
        // return the maximum possible integer 
        // it will help in backtracking
        return INT_MAX;
    }

    int minNumber = minimumNumber(arr, n, index +1);

    return min(arr[index], minNumber);
}

int recursiveBinarySearch(int arr[], int l, int h, int target){

    // base case
    if(l > h)   return -1;
    
    int mid = (l+h) >> 1;

    if(arr[mid] == target)  return mid;
    
    else if(target > arr[mid])  return recursiveBinarySearch(arr, mid+1, h, target);

    else   return recursiveBinarySearch(arr, l, mid-1, target);
    
    // if(l <= h){
    //     int mid = (l+h)/2;
    //     if(arr[mid] == target){
    //         return mid;
    //     }
    //     else if(target > arr[mid]){
    //         return recursiveBinarySearch(arr, mid+1, h, target);
    //     }
    //     else{
    //         return recursiveBinarySearch(arr, l, mid-1, target);
    //     }
    // }
    // return -1;
}
int main()
{
    int n  = 9;
    int arr[] = { 10 ,20, 30, 40,  50, 60, 70, 90, 100 };
    // printarray(arr, 9, 0);
    // cout<<endl<<searchArray(arr, n, 0, 90)<<endl;
    // cout<<maximumNumber(arr, n, 0, INT_MIN)<<endl;
    // cout<<minimumNumber(arr, n, 0);
    int l = 0;
    int h = n-1;
    int ans = recursiveBinarySearch(arr, l, h, 400);
    cout<<ans<<" "<<arr[ans]<<endl;
return 0;
}