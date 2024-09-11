#include<iostream>
#include<math.h>
#include <complex>
using namespace std;

    bool isPalindrome(int x) {
        int n = x;
        int m = x;

        int d = 0;
        while(x!=0){
            n = n/10;
            d++;
        }
        int rev = 0;
        while(m!=0){
            int rem = m%10;
            d--;
            rev = rev + rem*(pow(10,d));
            m = m/10;
        }
        if(x == rev){
            cout<<"yes"<<rev<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }
int main()
{
    int n = 121;
    isPalindrome(n);
return 0;
}