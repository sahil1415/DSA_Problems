#include <iostream>
#include <vector>
#include <map>

using namespace std;

int pivotIndex(vector<int>& nums) {
    int n = nums.size();
    map<int, int> prefixSum;
    int sum = 0;

    // Calculate prefix sums
    for (int i = 0; i < n; i++) {
        sum += nums[i];
        prefixSum[i] = sum;
    }

    // Output prefix sums
    for (int i = 0; i < n; i++) {
        cout << prefixSum[i] << " ";
    }
    cout << endl; // Add a newline after printing prefix sums

    // Find the pivot index
    for (int j = n - 1; j >= 0; j--) {
        int diff = prefixSum[n - 1] - prefixSum[j];
        if (prefixSum.find(diff) != prefixSum.end()) {
            // Pivot index found
            cout << "Pivot index = " << j << endl;
            return j; // Return the pivot index
        }
    }

    // Pivot index not found
    cout << "Pivot index not found" << endl;
    return -1;
}

int main() {
    vector<int> v = {1, 7, 3, 6, 5, 6};
    pivotIndex(v);
    return 0;
}





// #include<bits/stdc++.h>
// #include<vector>
// #include<iostream>

// using namespace std;
//     int pivotIndex(vector<int>& nums) {
//         int n = nums.size();
//         map<int, int> prefixSum;
//         int sum = 0;
//         for(int i =0; i<nums.size(); i++){
//             sum = sum + nums[i];
//             prefixSum[i] = sum;
//         }
//         for(int i=0; i<nums.size(); i++){
//             cout<<prefixSum[i]<<" ";
//         }
//         for(int j = nums.size()-1; j>=0; j--){
//             int diff = prefixSum[n-1] - prefixSum[j];
//             for(auto it : prefixSum){
//                 if(diff == it.second){
//                     cout<<"Pivot index = "<<j;
//                 }
//             }
//         }
//     }
// int main(){
//     vector<int> v ;
//     v.push_back(1);
//     v.push_back(7);
//     v.push_back(3);
//     v.push_back(6);
//     v.push_back(5);
//     v.push_back(6);
//     pivotIndex(v);
// }