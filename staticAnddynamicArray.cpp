#include<iostream>
using namespace std;

int main(){
    int a[]={1,2,3,4,5};  //statically created array
    int *ptr;
    ptr=new int[5];       //dynamically created array
    int i,j;
    cout<<"Elements of statically created array:";
    for(i=0; i<5; i++){
        cout<<a[i]<<"\t";
    }
    cout<<"\nEnter the elaments of dynamically created array:";
    for(i=0; i<5; i++){
        // cin>>*(ptr+i);
        cin>>ptr[i];
    }
    cout<<"Elements entered dynamically are:";
    for(i=0; i<5; i++){
        // cout<<*(ptr+i)<<"\t";
        cout<<ptr[i]<<"\t";
    }
}