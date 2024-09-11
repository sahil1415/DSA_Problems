#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> nums = {1,2,3,4,5};
    int i = *(nums.begin());
    cout<<i<<" "<<nums[i-1]<<endl;
    int j = *(nums.end());
    cout<<j<<" "<<nums[j-3];
return 0;
}