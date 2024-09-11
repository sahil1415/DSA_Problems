#include<bits/stdc++.h>
using namespace std;

long long int squareRoot(int x){
    int low = 0;
    int high = x-1;
    long long int mid = low + (high - low)/2;

    while(low <= high){
        if((mid*mid)==x){
            return mid;
            break;
        }
        else if((mid*mid)>x && x>(mid-1)*(mid-1)){
            return mid-1;
        }
        if((mid*mid)<x){
            low = mid+1;
        }
        else{
            high = mid -1;
        }
        mid = low + (high - low)/2;
    }
    return -1;
}

int main(){
   long long int n =squareRoot(1000000);
    cout<<"Square Root = "<<n;
}