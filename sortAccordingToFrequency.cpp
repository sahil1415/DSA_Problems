#include<iostream>
#include<vector>
#include <unordered_map>
using namespace std;
bool cmp(){

}
void sortFreq(vector<int> &nums){
    unordered_map<int ,int> mpp;

    for(int i : nums){
        mpp[i]++;
    }
    for(auto it : mpp){
        
    }
}
int main()
{
    vector<int> nums = {1,1,1,2,2,3,4,5,5,6,7,7,7};
return 0;
}