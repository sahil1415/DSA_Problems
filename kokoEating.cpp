#include<bits/stdc++.h>
using namespace std;

int findMax(vector<int> v){
    int maxi = INT_MIN;
    for(int i=0; i<v.size(); i++){
        maxi = max(v[i],maxi);
    }
    cout<<"maxi="<<maxi<<endl;
    return maxi;
}

int returningHour(vector<int> v1 , long int m){
    long long int hour=0;
    for(int i=0; i<v1.size(); i++){
        hour = hour + ceil(v1[i]/m);
    }
    cout<<"Hour="<<hour<<endl;
    return hour; 
}
int minimumRateToEatBananas(vector<int> arr, int h) {
    int n = arr.size();
     long int low = 1;
     long int high = findMax(arr);
     long int mid = low + (high - low)/2;

    while(low <= high){
        int result = returningHour(arr,mid);

        if(result<=h){
            high = mid -1;
        }
        else{
            low = mid +1;
        }
        mid = low + (high - low)/2;
    }
    return low;
}
int main(){
    vector<int> v3 = {805306368,805306368,805306368};
    int min = minimumRateToEatBananas(v3,1000000000);
    cout<<min;
}




