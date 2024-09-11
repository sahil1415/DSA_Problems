#include<iostream>
using namespace std;

int fact(int x){
    int result = 1;
    while(x!=0){
        result = result * x;
        x--;
    }
    return result;
}

int nCr(int n, int r){
    int res = fact(n)/(fact(r)*fact(n-r));
    return res;
}

int main(){
    int a,b,c;
    cout<<"Enter the value of N and R: ";
    cin>>a>>b;
    c=nCr(8,2);
    cout<<"The value of nCr is: "<<c;

    return 0;
}