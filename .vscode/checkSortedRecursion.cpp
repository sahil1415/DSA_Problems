#include <vector>
#include<iostream>
using namespace std;

bool checkSorted(vector<int> &nums, int index, int size){
    // Base case
    if(index >= size){
        return true;
    }
    if(nums[index+1] < nums[index]){
        return false;
    }
    return checkSorted(nums, index+1, size);
}
int main()
{
    vector<int> nums = {1,2,3,4,5,6,2};
    cout<<checkSorted(nums,0,7);
return 0;
}