// #include<bits/stdc++.h>
// using namespace std;
// void merge(int arr[], int low, int mid, int high){
//     vector<int> temp;
//     int left = low;
//     int right = mid+1;

//     while(left <= mid && right <= high){
//         if(arr[left] <= arr[right]){
//             temp.push_back(arr[left]);
//             left++;
//         }
//         else {
//             temp.push_back(arr[right]);
//             right++;
//         }
//     }
//         // if there are any elements left on the left array stll
//         while(left <= mid){
//             temp.push_back(arr[left]);
//             left++;
//         }
//         // if there are any elements right on the right array stll
//         while(right <= high){
//             temp.push_back(arr[right]);
//             right++;
//         }

//         // copying the temp array into the orignal arrya for further merging
//         for(int i = low; i<=high; i++){
//             arr[i] = temp[i-low];
//         }

// }

// // void mergeS(int arr[], int low, int high){
   
// void mergeSort(int arr[], int low, int high) {
//     // Write Your Code Here
//      if(low >= high){
//         return;
//     }
//     int mid = (low+high)/2;
//     mergeSort(arr, low, mid);
//     mergeSort(arr,mid+1, high);
//     merge(arr,low,mid,high);
// }
// int main(){
//     int arr[10] = {4,3,1,2,4,6,4,1,2,5};
//     mergeSort(arr, 0, 9);
//     for(int i = 0; i<9; i++){
//         cout<<arr[i]<<" ";
//     }
// }

#include<bits/stdc++.h>

void mergeArr(int arr)

void mergeSort(int arr[], int low, int high){
    if(low <= high){
        return;
    }

    int mid = (low+high)/2;
    mergeSort(arr, low, mid-1);
    mergeSort(arr, mid+1, high);
    mergeArr(arr, low, mid, high);
}