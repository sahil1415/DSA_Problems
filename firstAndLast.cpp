#include <bits/stdc++.h> 
using namespace std;

int firstOccu(vector<int> &arr, int size, int element){
    int start = 0;
    int end = size-1;
    int ans = -1;
    int mid = start + (end - start)/2;
    while(start<=end){
        
        if(arr[mid] == element){
            ans = mid;
            end = mid-1;   //searching on left side
        }
        else if(element < arr[mid]){
            end = mid-1;
        }
        else{
            start =mid +1;
        }
        mid = start + (end - start)/2;
    }
    return ans;
}
int lastOccu(vector<int> &arr, int size, int element){
    int start = 0;
    int end = size-1;
    int ans = -1;
    int mid = start + (end - start)/2;
    while(start<=end){
        
        if(arr[mid] == element){
            ans = mid;
            start = mid+1;  //Searching on the right side
        }
        else if(element > arr[mid]){
            start = mid+1;
        }
        else{
            end = mid-1;
        }
        mid = start + (end - start)/2;
    }
    return ans;
}
int main(){}
pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)
{
    // Write your code here
    pair<int, int> p;
    p.first = firstOccu(arr, n, k);
    p.second = lastOccu(arr, n, k);
    return p;
}

// int main(){
//     vector<int> v ={2,2,2,2,2,2,2,2,2};  //basic of binary search array should be sorted <<fool>>
//     int f = firstOccu(v, 11, 4);         // you have been stuck here for 2 hours but Yeah, you have learnt a lot
//     int l = lastOccu(v, 11, 4);          // I'm very proud of you -_- fool
//     cout<<"First Occurence = "<<f<<endl;
//     cout<<"Last Occurence = "<<l;
// }

