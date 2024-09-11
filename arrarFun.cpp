#include<iostream>
    
using namespace std;
    
    int printArray(int arr[], int size){
        cout<<"Printing the array-"<<endl;
        for(int i=0; i<size; i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl<<"Printing Done";
    }
int main()
{
    int first[15]={1,2,3};
    printArray(first, 15);
    
return 0;
}