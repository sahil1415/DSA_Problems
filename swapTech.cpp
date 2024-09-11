#include<iostream>
using namespace std;

void swap(int a, int b){
    // a = a+b;
    // b = a-b;
    // a = a-b;
    // cout<<a<<endl;
    // cout<<b;

    a = a^b;
    cout<<a<<endl;
    b = a^b;
    cout<<"b= "<<b<<endl;
    a = a^b;
    cout<<"a= "<<a<<endl;
}
int main()
{
    int a = 5;
    int b = 4;
    swap(a,b);
    return 0;
}