#include<iostream>
using namespace std;
void recFun(int n){
    if(n==0) return;

    recFun(n-1);
    cout<<n<<" ";
}
int main()
{
    recFun(5);
return 0;
}