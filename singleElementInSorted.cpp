#include<bits/stdc++.h>
using namespace std;

int singleElement(vector<int> arr){
    int n = arr.size();

    if(n==1) return arr[0];

    if(arr[0]!=arr[1])  return arr[0];

    if(arr[n-1]!=arr[n-2]) return arr[n-1];

    int low = 1;
    int high = n-2;
    int mid = low + (high - low)/2;

    while(low<=high){
        if(arr[mid]!=arr[mid+1] && arr[mid]!=arr[mid-1]){
            return arr[mid];
        }
            
        
        if((mid%2 ==1 && arr[mid]==arr[mid-1]) || (mid%2==0 && arr[mid]==arr[mid+1])){
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
    vector<int> v = {1,1,2,2,3,3,4,5,5,6,6};
    int i  = singleElement(v);
    cout<<"Unique Element = "<<i;
}


// if(mid%2 == 0){
//             if(arr[mid]==arr[mid-1]){
//                 low = mid +1;
//             }
//             else{
//                 high = mid -1;
//             }
//             }
//             else{
//                 if(arr[mid]==arr[mid+1]){
//                 high = mid -1;
//             }
//             else{
//                 low = mid +1;
//             }
//             }