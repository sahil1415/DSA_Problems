#include <bits/stdc++.h>
using namespace std;
int findKRotation(vector<int> &arr)
{
    int low = 0;
    int high = arr.size() - 1;
    int mid = low + (high - low) / 2;
    int ans = INT_MAX;
    int index = -1;
    // int index =-1;
    while (low <= high)
    {
        if (arr[low] <= arr[mid])
        {
            // this implies this left side of the array is sorted
            // ans = min(arr[low], ans);
            // if (ans == arr[low]){
            //   index = low;
            // }
            if (arr[low] < ans)
            {
                ans = arr[low];
                index = low;
            }
            low = mid + 1;
        }
        else
        {
            // ans = min(ans, arr[mid]);
            // if (ans == arr[mid]) {
            //   index = mid;
            // }
            if (arr[mid] < ans)
            {
                ans = arr[mid];
                index = mid;
            }
            high = mid - 1;
        }
        mid = low + (high - low) / 2;
    }
    return index;
}
int main()
{
    vector<int> v = {5, 6, 7, 8, 9, 1, 2, 3, 4};
    int n = findKRotation(v);
    cout << n;
}