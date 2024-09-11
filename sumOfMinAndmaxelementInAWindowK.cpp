#include<iostream>
#include<vector>
#include<queue>
#include<deque>
using namespace std;
int  sumOfMinAndMaxK(vector<int> &nums, int k){
    int ans = 0;
    deque<int> dq1, dq2;

    // handling the first window
    for(int i=0; i<k; i++){

        // maximum element
        while(!dq1.empty() && nums[dq1.back()] <= nums[i]){
            dq1.pop_back();
        }
        dq1.push_back(i);

        //minimum element
        while(!dq2.empty() && nums[dq2.back()] >= nums[i]){
            dq2.pop_back();
        }
        dq2.push_back(i);
    }

    // finding the answer of the first window
    int sum = nums[dq1.front()]+nums[dq2.front()];
    ans += sum;
    // handling the remainaing window

    for(int i=k; i<nums.size(); i++){
        // removing the element if it is out of the window
        if(i - dq1.front() >= k){
            dq1.pop_front();
        }
        if(i - dq2.front() >= k){
            dq2.pop_front();
        }
        // adding the elements

        while(!dq1.empty() && nums[i] >= nums[dq1.front()]){
            dq1.pop_back();
        }
        dq1.push_back(i);

        while(!dq2.empty() && nums[i] <= nums[dq2.front()]){
            dq2.pop_back();
        }
        dq2.push_back(i);


        // finding the naswer
        sum =  nums[dq1.front()] + nums[dq2.front()];
        ans += sum;
    }
    return ans;
}
int main()
{
    vector<int> nums = {2,5,4,7,8,2,1};
    int k=4;          // 7 11 12 10 9
    cout<<sumOfMinAndMaxK(nums, k);
return 0;
}