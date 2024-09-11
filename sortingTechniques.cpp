#include<iostream> 
using namespace std;

void bubbleSort(int arr[], int n){
    int s = 0;
    for(int i = n-1; i>=0; i--){
        for(int j=0; j<=i-1; j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                int s = 1;
            }
        }
        if(s==0)
        break;
    }
}
void insertionSort(int arr[], int n){
    for(int i = 0; i<n; i++){
        int j = i;
        while(j>0 && arr[j-1]>arr[j]){
            swap(arr[j-1],arr[j]);
            j--;
        }
    }
}   
int main(){
    int v1[] = {5,4,3,2,1};
    bubbleSort(v1, 5);
    cout<<"Sorted array by bubble sort -"<<endl;
    for(int i=0; i<5; i++){
        cout<<v1[i]<<" ";
    }
    cout<<endl;
    int v2[] = {9,8,7,6,5};
    insertionSort(v2, 5);
    cout<<"Sorted array by insertion sort -"<<endl;
        for(int i=0; i<5; i++){
        cout<<v2[i]<<" ";
    }
return 0;
}

// #include<iostream>
// #include<bits/stdc++.h> 
// using namespace std;

// vector<int> bubbleSort(vector<int> arr){
//     int s = 0;
//     int n= arr.size();
//     for(int i = n-1; i>=0; i--){
//         for(int j=0; j<=i-1; j++){
//             if(arr[j] > arr[j+1]){
//                 int temp = arr[j];
//                 arr[j] = arr[j+1];
//                 arr[j+1] = temp;
//                 // swap(arr[j],arr[j+1]);
//                 int s = 1;
//             }
//         }
//         if(s==0)
//         break;
//     }
// }    
// int main(){
//     vector<int> v1 = {5,4,3,2,1};
//     bubbleSort(v1);
//     cout<<"Sorted array is -"<<endl;
//     for(int i=0; i<5; i++){
//         cout<<v1[i]<<" ";
//     }
// return 0;
// }