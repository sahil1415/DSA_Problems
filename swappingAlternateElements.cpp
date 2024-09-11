#include<iostream> 
using namespace std;

void alternateSwap(int arr[], int size){
    int temp=0;
    for(int i=0; i<size; i=i+2){
        if(i+1<size){
        temp=arr[i];
        arr[i]=arr[i+1];
        arr[i+1]=temp;
        }
    }
}
void printSwap(int arr[], int size){
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}


int main()
{
    int even[]={1,2,3,4,5,6,7,8};
    alternateSwap(even, 8);
    printSwap(even, 8);
    cout<<endl;
    int odd[]={1,2,3,4,5,6,7};
    alternateSwap(odd,7);
    printSwap(odd,7);
return 0;
}