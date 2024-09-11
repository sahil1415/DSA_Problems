#include<iostream>
using namespace std;
int gcd(int a, int b){
    while(a>0 && b>0){
        if(a > b){
            a = a - b;
        }
        else{
            b = b - a;
        }
    }
    return a == 0 ? b : a;
}

int lcm(int a, int b){
    int hcf = gcd(a,b);
    return (a*b)/hcf;
}

//we know lcm * hcf = a*b
// lcm = a*b/hcf
int main()
{
    int a = 16;
    int b = 18;
    cout<<"HCF = "<<gcd(a,b)<<endl;
    cout<<"LCM = "<<lcm(a,b);
return 0;
}