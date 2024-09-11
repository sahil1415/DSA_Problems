#include<iostream>
#include<bits/stdc++.h>
#include<math.h>
using namespace std;

int bhangBhosda(vector<int> nums){
        int n = nums.size();
        int i = 0;
        int num = 0;
        while(n > 0){
            num = num + (pow(10,n-1) * nums[i]);
            n--;
            i++;
        }
        return num;
    }
int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    cout<<bhangBhosda(v);
return 0;
}