#include<iostream>
using namespace std;

int main()
{
    // int a[] = {1, 2, 3, 4};
    // int *p = a++;
    // cout<<*p;
    // throws error
    int arr[] = {1,2,3,4};
    int *p = (arr+1);
    cout<<*p<<" "<<*arr+9;
return 0;
}