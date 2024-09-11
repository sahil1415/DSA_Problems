#include<iostream>
using namespace std;
void recFun(int n, int i){
    if(i>n) return;
    
    cout<<i<<" ";
    recFun(n, i+1);
}
int main()
{
    recFun(5,1);
return 0;
}