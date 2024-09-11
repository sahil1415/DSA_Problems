#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
int globalX;
static bool cmp(int a, int b) {
    int diff1 = abs(a - globalX);
    int diff2 = abs(b - globalX);
    if (diff1 != diff2) {
        return diff1 < diff2;
    } else {
        return a < b;
    }
} 
vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        globalX = x;
        sort(arr.begin(), arr.end(), cmp);
        cout<<"After custom sorting"<<endl;
        for(int i=0; i<arr.size(); i++){
            cout<<arr[i]<<endl;
        }

        vector<int> v(arr.begin(), arr.begin()+k);
        sort(v.begin(), v.end());

        return v;
    }

int main()
{
    int x = 10;
    int k = 4;
    vector<int> v1 = {10, 8, 4, 30, 15};
    vector<int> v2 = findClosestElements(v1, k, x);
    cout<<"Result"<<endl;
    for(auto it: v2){
        cout<<it<<endl;
    }   
return 0;
}