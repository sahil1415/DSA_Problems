#include <iostream>
#include <vector>
#include <algorithm> // for max_element
using namespace std;

bool woodCollected(vector<int> &nums, long long  wood, long long  mid){
    long long  woodsCollected = 0;
    int n = nums.size();
    for(int i = 0; i<n; i++){
        if(mid < nums[i]){
            woodsCollected += nums[i] - mid;
        }
    }
    cout <<"woods collected = "<<woodsCollected << endl;
    return woodsCollected >= wood;
}

long long  lengthOfTreesCut(vector<int> &nums, int wood){
    long long int l = 0;
    long long int h = *max_element(nums.begin(), nums.end());
    long long int ans = -1;
    while(l <= h){
        int mid = l + (h - l)/2;
        cout<<"mid = "<<mid<<endl;
        if(woodCollected(nums, wood, mid) >= wood){
            ans = mid;
            l = mid + 1;
        }
        else{
            h = mid - 1;
        }
    }
    return ans;
}
  
int main() {
    int n, wood;
    cin >> n >> wood;
    vector<int> nums(n);
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }
    cout << lengthOfTreesCut(nums, wood) << endl;
    return 0;
}
