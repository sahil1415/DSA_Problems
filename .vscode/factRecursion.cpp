#include<iostream>
using namespace std;
int factorial(int n){
    if(n < 2){
        return 1;
    }
    return n* factorial(n-1);
}
void counting(int n){
    if(n == 0){
        return;
    }
    counting(n-1);
    cout<<n<<" ";
}
int power(int m, int n){
    if(n == 0){
        return 1;
    }
    return m * power(m, n-1);
}

int fibonacci(int n){
    if(n == 0 || n == 1){
        return n;
    }
    int lastTerm = fibonacci(n-1);
    int secondLastTerm = fibonacci(n-2);
    return lastTerm+secondLastTerm;
}
int main()
{
    int m = 3;
    int n = 7;
    cout<<factorial(n)<<endl;
    counting(n);
    cout<<endl;

    cout<<power(m,n)<<endl;

    int x = fibonacci(n);
    cout<<"Fibonacci sum = "<<x<<endl;
    
return 0;
}