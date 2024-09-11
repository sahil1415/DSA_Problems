#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int findMostFrequentElement(vector<int>& nums) {
    // Sort the array
    sort(nums.begin(), nums.end());

    int maxFrequency = 1;
    int currentFrequency = 1;
    int mostFrequentElement = nums[0];

    // Traverse the sorted array
    for (int i = 1; i < nums.size(); ++i) {
        if (nums[i] == nums[i - 1]) {
            currentFrequency++;
        } else {
            currentFrequency = 1;
        }

        // Update the most frequent element if current frequency is higher
        if (currentFrequency > maxFrequency) {
            maxFrequency = currentFrequency;
            mostFrequentElement = nums[i];
        }
    }

    return mostFrequentElement;
}

int main() {
    vector<int> nums = {
        233, 233, 233, 233, 233, 233, 233, 233, 233, 233, 233, 233, 233, 233, 233, 233, 233, 233, 233, 233, 233,
        233, 233, 233, 233, 233, 233, 233, 233, 233, 233, 233, 233, 233, 233, 233, 233, 233, 233, 233, 233, 233,
        // (Repeated elements)
        233, 233, 233, 233, 233, 233, 233, 233, 233, 233, 233, 233, 233, 233, 233, 233, 233, 233, 233, 233, 233,
        2333, 2333, 2333, 2333, 2333, 2333, 2333, 2333, 2333, 2333, 2333, 2333, 2333, 2333, 2333, 2333, 2333,
        // (More repeated elements)
        2333, 2333, 2333, 2333, 2333, 2333, 2333, 2333, 2333, 2333, 2333, 2333, 2333, 2333, 2333, 2333, 2333
    };

    int mostFrequentElement = findMostFrequentElement(nums);
    cout << "The most frequent element is: " << mostFrequentElement << endl;

    return 0;
}