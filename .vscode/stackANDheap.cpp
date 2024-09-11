#include<iostream>
using namespace std;
// when we allocate memory dynamically it is allocated in heap because 
// stack memory is limited therefore compiler is not aware what size of memory
// user will allocate thats why when we allocate memory dynamically it is allocated in heap

void memoryAllocation(){
    //stack
    int a1 = 5;
    //heap
    int* a2 = new int;

    //stack 
    int a3[5];
    //heap
    int* a4 = new int[5];

    //stack
    int a5[3][3] = {
                  {1,2,3},
                  {1,2,3},
                  {1,2,3},
                  };
    // heap
    int** a6 = new int* [4];
    for(int i=0; i<4; i++){
        a6[i] = new int[4];
    }
    //accessing
    cout<<"Enter values"<<endl;
    for(int i=0; i<4; i++){
        for(int j = 0; j<4; j++){
            cin>>a6[i][j];
        }
    }
    cout<<"values are"<<endl;
    for(int i =0; i<4; i++){
        for(int j=0; j<4; j++){
            cout<<a6[i][j]<<" ";
        }
        cout<<endl;
    }
    delete a2;
    delete a4;
    // delete a6;
    for(int i=0; i<4; i++){
        delete[] a6[i];
    }
}

int main()
{
    void * ptr;
    int x = 5;
    ptr = & x;
    cout<<"Addres = "<<(int)ptr<<endl;
    cout<<"Address = "<<static_cast<int*>(ptr)<<endl;
    cout<<"Value = "<<*(static_cast<int*>(ptr))<<endl;

    memoryAllocation();
return 0;
}