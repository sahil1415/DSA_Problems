#include<bits/stdc++.h>
using namespace std;
long reverseBits(long n) {
    // Write your code here.
    vector<int> bits(32,0);
    int i=0;
    while(n>0){
        int r = n%2;
        bits[i] = r;
        n = n/2;
        i++;
    }
    reverse(bits.begin(), bits.end());
    for(int j=0;j<32;j++){
        cout<<bits[j];
    }
    cout<<endl;
    int j = 0;
    long  sum =0;
    while(j<32){
        sum = sum + (bits[j]*pow(2,j));   
        j++;
    }
    return sum;
}


int main(){
    long n = reverseBits(6);
    cout<<n;
}
