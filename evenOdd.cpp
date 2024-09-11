#include<iostream>
using namespace std;
int evenOdd(int n){
    if((n & 1) == 0)   return 1;

return 0;
}
int main()
{
    int n;
    cout<<"Enter a number - ";
    cin>>n;
    if(evenOdd(n)){
        cout<<"The entered number is even";
    }
    else{
        cout<<"The entered number is odd ";
    }
return 0;
}