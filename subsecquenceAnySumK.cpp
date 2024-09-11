#include<bits/stdc++.h>
using namespace std;


bool printSub(int index, vector<int> &v, int s, int sum, int arr[], int n){
    if(index == n){
        if(sum == s){
            for(auto it : v) cout<<it<<" ";
            cout<<endl;
            return true;
        }
        return false;
    }

    // pick condition 
    v.push_back(arr[index]);
    s += arr[index];
    if(printSub(index+1, v, s ,sum, arr, n) == true){
        return true;
    }

    s -= arr[index];
    v.pop_back();

    if(printSub(index+1, v, s ,sum, arr, n) == true){
        return true;
    }

    return false;
}
int main()
{
     int arr[3] = {1,2,1};
    vector<int> v;
    int s = 0;
    int sum = 2;
    int n = 3;

    printSub(0, v, 0, 2, arr, 3);
return 0;
}