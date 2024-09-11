#include<iostream>
using namespace std;

//Insertion Sort Algorithm 

int insertionSort(int arr[], int size){
    int temp=0;
    int j=0;
    for(int i=1; i<size; i++){

        temp = arr[i];
        j=i-1;

        while(j>=0 && arr[j]>temp){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = temp;
    }
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}


int main(){
    int a[7] = {8,7,6,5,4,3,2};
    insertionSort(a, 7);
}