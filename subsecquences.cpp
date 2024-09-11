#include<bits/stdc++.h>
using namespace std;

void printSubsecquences(int index, vector<int> v, int arr[], int n){
    if(index == n){
        for(auto it : v){
            cout<<it<<" ";
        }
        if(v.size() == 0){
            cout<<"{}";
        }
         cout<<endl;
         return;
    }

    // pick or take the particular index to subsecquences
    v.push_back(arr[index]);
    printSubsecquences(index+1, v, arr,n);
    v.pop_back();

    // Not take or not pick condition this element not adding to your subsecquences 

    printSubsecquences(index+1, v, arr, n);
}

int main(){
    int arr[] = {3,1,2};
    int n = 3;
    vector<int> v;
    printSubsecquences(0, v, arr, n);
}