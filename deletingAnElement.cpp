#include<iostream>
    
using namespace std;
    int deletingElement(int *arr, int size, int position){
        int element=0;
        int a[size-1];
        int k=1;
        for(int i=0; i<position; i++){
                a[i]=arr[i];
            }

        for(int j=0; j<size-position; j++){
            a[position+j]=arr[position+k];
            k++;
        }

        for(int i=0; i<size-1; i++){
            cout<<a[i]<<" ";
        }
    }
int main()
{
    int b[8] = {1,2,3,4,5,6,7,8};
    cout<<"Array after deleting the element-"<<endl;
    deletingElement(b, 8, 4);
return 0;
}