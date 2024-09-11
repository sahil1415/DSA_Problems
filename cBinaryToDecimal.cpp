#include<iostream>
#include<math.h>

using namespace std;

int main(){
    int n;
    cout<<"Enter a binary number-";
    cin>>n;
    int ans=0;
    int i=0;
    while(n!=0){
        int r = n%10;
        ans = ans + r*pow(2,i);

        n = n/10;
        i++;
    }
    cout<<"Decimal of the given number is:"<<ans;
}
