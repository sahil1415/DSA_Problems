#include<iostream>
    
using namespace std;
    int max(int arr[], int size){
        int temp=arr[0];
        //cout<<"Finding the maximum-"<<endl;
        for(int i=0; i<size; i++){
            if(temp<=arr[i]){
                temp=arr[i];
            }
        }
        return temp;
    }

    int min(int arr[], int size){
        int temp=arr[0];
        //cout<<"Finding the minimum-"<<endl;
        for(int i=0; i<size; i++){
            if(temp>=arr[i]){
                temp=arr[i];
            }
        }
        return temp;
    }


int main()
{
    int a[9]={1,2,3,4,5,6,7,8,9};
    int m=max(a,9);
    int n=min(a,9);  
    cout<<"Maximum element of the array is-"<<m<<endl;
    cout<<"Minimum element of the array is-"<<n; 
return 0;
}