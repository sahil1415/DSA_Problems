#include<iostream>
using namespace std;

//linear search algorithm
int linearSearch(int arr[], int size ,int element){
    static int flag=0;
    static int i=0;
        for(i=0; i<size; i++){
        if(arr[i] == element){
            flag=1;
            break;
        }
    }
     if(flag==1){
            return i;
        }
        else{
            return -1;
        }
}
int main(){
    int n,x;
    int flag=0;
    cout<<"Enter the size of the array:";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter the element you want to search:";
    cin>>x;
    int res = linearSearch(arr, n, x);
    if(res>=0){
        cout<<"Element found at index: "<<res;
    }
    else{
        cout<<"Element not found";
    }

}