#include<iostream>
#include<map>
#include<bits/stdc++.h>
#include <unordered_map>
using namespace std;
    void intPointers(){
        unordered_map<int, pair<int,int>> mpp;
        int arr[] = {10, 20, 30, 40, 50};
        int *ptr = arr;

        cout<<arr<<endl;
        cout<<&arr<<endl;
        cout<<&arr[0]<<endl;
        cout<<&arr[4]<<endl;

        cout<<ptr<<endl;
        cout<<&ptr<<endl;
        cout<<*ptr<<endl;

        cout<<*arr+100<<endl;
        cout<<*(arr+2)<<endl;

        for(int i = 0; i<5; i++){
            cout<<*(ptr+i)<<" "<<ptr+i<<endl;
        }  
    }   
     void charpointers(){
        char ch[100] = "Sahil Ansari";
        char* cptr = ch;
        cout<<ch<<endl;
        cout<<cptr<<endl;
        cout<<*cptr<<endl;
        cout<<&cptr<<endl;
        cout<<ch[0]<<endl;
        cout<<*(cptr + 3)<<endl;
        cout<<cptr+4<<endl;
    }
int main(){
    cout<<"IntegerPointrers"<<endl;
  intPointers();
  cout<<"CharacterPointers"<<endl;
  charpointers();
return 0;
}