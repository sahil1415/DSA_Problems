#include <vector>
#include<iostream>
using namespace std;
    int numberOfSubarrays(vector<int>& nums, int k) {
        int n = nums.size();
        for(int i=0; i<n; i++){
            if((1 & nums[i]) == 1){
                nums[i] = 1;
            }
            else{
                nums[i] = 0;
            }
        }
        for(auto it : nums){
            cout<<it<<" ";
        }
        cout<<endl;
        int preSum = 0;
        int cnt = 0;
        int j = 0;
        for(int i=0; i<n; i++){
            if(preSum + nums[i] > k){
                preSum -= nums[j];
                j++;
                cnt++;
            }
            else{
                preSum += nums[i];
            }
        }
        return cnt;
    }
int main()
{
    vector<int> nums = {2,2,2,1,2,2,1,2,2,2};
    int k = 2;
    cout<<numberOfSubarrays(nums, k);
return 0;
}