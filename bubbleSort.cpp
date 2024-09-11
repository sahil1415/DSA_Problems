#include<iostream>

using namespace std;


int bubbleSort(int arr[], int size){
     int flag=0;
    if(flag == 0){
         for(int i=0; i<size; i++){

        for(int j=0; j<size-i; j++){

            if(arr[j] >= arr[j+1]){

                int t;
                t = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = t;
                flag = 1;
               }
            }
        }  
    }
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int a[] = {8,7,6,5,4,3,2,1};
    cout<<"Sorted array-"<<endl;
    bubbleSort(a,8);
}