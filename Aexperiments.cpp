#include<iostream>
    
using namespace std;
    
int main()
// {
//     int a=9;
//     if(a==9){
//         cout<<"Anything"<<endl;
//     }
//     if(a>0){
//         cout<<"positive"<<endl;
//     }
//     else{
//         cout<<"Negative";
//     }
// return 0;
// }
// {
//     int a=2;
//     int b=a+1;
//     if((a=3)==b){
//         cout<<a;   //output
//     }
//     else{
//         cout<<a+1<<"hii";
//     }
// }
{
    //checking prime number
    cout<<"Enter a number-";
    int n;
    cin>>n;
    int i=1;
    static int flag=0;
    while(i<=n){
        if(n%i==0){
            flag=flag+1;
        }
        i++;
    }
    if(flag>=3){
        cout<<"Not a Prime";
    }
    else{
        cout<<"Prime";
    }
}