#include<iostream>
using namespace std;

int main(){
    int a1[5];             //all the indexes are initializes with garbage values
    int a2[5]={1,2,3,4,5}; // all places are occupied with respective given values
    int a3[5]={2,4};       // all the indexes are occupied with 0 except  0 and 1
    int a4[5]={0};         // all the indexes are occupied with 0
    int a5[]={6,7,8,9,10}; // array size is automatically adjusted according to the no of elements
    // No of ways array elements can be accessed 
    cout<<a2[3]<<endl;
    cout<<3[a2]<<endl;
    cout<<*(a2+3)<<endl;
    //Printing address of an array
    int*ptr=&a2[5];
    for(int i=0; i<5; i++){
        cout<<ptr<<endl;
        ptr++;
    }
    //also we can do the same work without using pointers
    for(int i=0;i<5;i++){
        cout<<&a2[i]<<endl;
    }

}