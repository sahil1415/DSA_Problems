#include<iostream>
using namespace std;

void recFun(int n){
    if(n==0) return;

    cout<<n<<" ";
    recFun(n-1);
}
int main(){
    int x = 3;
    recFun(x);
    cout<<"Recursion Completed"<<endl;
return 0;
}