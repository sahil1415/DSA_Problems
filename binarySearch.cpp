#include<iostream>
using namespace std;

int main(){
    int n,i,x;
    int flag=0;
    cout<<"Enter the size of the array:";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of Sorted array:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter the element you want to search:";
    cin>>x;
    //Binary search algorithm
    int l=0;
    int r=n-1;
    int mid;
    while(l<=r){
        mid=(l+r)/2;
        if(arr[mid]==x){
            cout<<"element found at index:"<<mid;
            break;
        }
        else if(x<=arr[mid]){
            l=0;
            r=mid-1;
            mid=(l+r)/2;
        }
        else if(x>=arr[mid]){
            l=mid+1;
            r=n-1;
            mid=(l+r)/2;
        }
        else{
            cout<<"Element not found:";
        }
    }
}