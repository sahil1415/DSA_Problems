#include<iostream>
    
using namespace std;

    void reverse(int arr[], int size){
        int temp=0;
        int start=0;
        int end=size-1;
        while(start<=end){
            temp=arr[start];
            arr[start]=arr[end];
            arr[end]=temp;

            start++;
            end--;
        }
    }
    void print(int arr[], int size){
        for(int i=0; i<size; i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
int main()
{
    int a[]={1,2,3,4,5,6,7,8};
    int b[]={1,2,3,4,5,6,7,8,9};
    reverse(a, 8);
    reverse(b,9);
    print(a,8);
    print(b,9);
return 0;
}