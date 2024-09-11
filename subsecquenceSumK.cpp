#include<bits/stdc++.h>
#include<iostream>
using namespace std;

void printSubsecquenceSumK(int index, vector<int> &v, int s, int sum, int arr[], int n){
    if(index == n){
        if(s == sum){
            for(auto it : v){
                cout<<it<<" ";
            }
            cout<<endl;
        }
        return;
    }

    // take condition
    v.push_back(arr[index]);
    s += arr[index];
    printSubsecquenceSumK(index +1 , v, s, sum, arr, n);
    

    // not take condition
    s -= arr[index];
    v.pop_back();
    printSubsecquenceSumK(index +1 , v, s, sum, arr, n);
}

int main(){
    int arr[3] = {1,2,1};
    vector<int> v;
    int s = 0;
    int sum = 2;
    int n = 3;

    printSubsecquenceSumK(0, v, 0, 2, arr, 3);
return 0;
}