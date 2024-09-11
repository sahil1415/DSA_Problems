#include<iostream>
using namespace std;
void recFun(int n, int i){
    if(i>n) return;
    recFun(n, i+1);
    cout<<i<<" ";
}
int main()
{
    recFun(5,1);
return 0;
}