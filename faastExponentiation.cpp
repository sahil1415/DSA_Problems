#include<iostream>
using namespace std;

long long fastExponentian(int a, int b){
    long long ans = 1;

    while(b > 0){
        // odd
        if(b & 1){
            ans = ans*a;
        }
    ans = ans*a;
    b = b / 2; // b = b >> 1; means divide by 2
    }
    return ans;
}
int main()
{
    int a = 5;
    int b = 4;
    cout<<"Ans = "<<fastExponentian(a,b);
return 0;
}