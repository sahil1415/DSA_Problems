#include<iostream>
#include<math.h>
using namespace std;

int  main(){
    int n;
    cout<<"Enter a decimal number-";
    cin>>n;
    int ans=0;
    int i=0;
    while(n!=0){
        int bit = n & 1;

        ans = ans + (bit * pow(10,i));
        
        n = n >>1;
        i++;
    }
    cout<<"Binary of the entered number is-"<<ans;
}

//another method of doing decimal  to binary conversion


// int main(){
//     int n;
//     cout<<"Enter a decimal number-";
//     cin>>n;
//     int i=0;
//     static int a[10];
//     while(n!=0){
//         int r=n%2;
//         a[i]=r;
//         n=n/2;
//         cout<<r<<" ";
//         i++;
//     }
//     for(int j=10; j>=0;j--){
//         cout<<a[j]<<" ";
//     }
// }
