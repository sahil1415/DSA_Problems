#include<bits/stdc++.h>
using namespace std;
int findMin(vector<int>& arr)
{
	int low = 0;
	int high = arr.size()-1;
	int mid = low + (high - low)/2;
	int ans = INT_MAX;
	while(low <= high){
		if(arr[low] <= arr[mid]){
			ans = min(ans, arr[low]);
			low = mid +1;
		}
		else{
			ans =min(ans , arr[mid]);
			high =mid -1;
		}
		mid = low + (high -low)/2;
	}
	return ans;
}
int main(){
    vector<int> v1 = {5,10,15,20,25,30};
    int n = findMin(v1);
    cout<<n<<endl;
}

