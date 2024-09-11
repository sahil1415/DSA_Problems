#include<iostream>
    
using namespace std;
    void insertingElement(int arr[], int size, int position, int element){
        int a[size+1];
        for(int i=0; i<position; i++){
            a[i]=arr[i];
        }
        int k=0;
        for(int i=1; i<size+1; i++){
            a[position+i]=arr[position+k];
            k++;
        }
        a[position] = element;
        
        for(int i=0; i< size+1; i++){
            cout<<a[i]<<" ";
        }
    }
int main()
{
    int b[8] = {1,2,3,4,5,6,7,8};
    insertingElement(b, 8, 5, 99);
return 0;
}