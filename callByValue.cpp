#include<iostream>
    
using namespace std;

int increment(int n){
    ++n;
    cout<<"Formal Parameters-"<<n<<endl;
    return n;
}
    

int main(){
    
    int n;
    cout<<"Enter a numbrer: ";
    cin>>n;
    increment(n);
    cout<<"Actual Parametrs-"<<n;
return 0;
}