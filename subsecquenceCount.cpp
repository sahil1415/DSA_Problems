#include<bits/stdc++.h>
using namespace std;


int printSub(int index, int s, int sum, int arr[], int n){
    if(index == n){
        if(sum == s){
            return 1;
        }
        return 0;
    }

    // pick condition 
    s += arr[index];
    int l = printSub(index+1, s ,sum, arr, n);

    s -= arr[index];

    int r = printSub(index+1, s ,sum, arr, n);


    return l+r;
}
int main()
{
     int arr[3] = {1,2,1};
    int s = 0;
    int sum = 2;
    int n = 3;

    cout<<printSub(0, 0, 2, arr, 3);
return 0;
}