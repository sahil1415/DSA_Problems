#include<bits/stdc++.h>
using namespace std;

int maxim(vector<int> v1){
    int maxi = INT_MAX;
    for(int i = 0; i<v1.size(); i++){
        maxi = max(v1[i],maxi);
    }
    return maxi;
}
int minim(vector<int> v2){
    int mini = INT_MIN;
    for(int i =0; i<v2.size(); i++){
        mini = min(v2[i],mini);
    }
    return mini;
}
int minDays(vector<int>& bloomDay, int b, int f){
    int low = maxim(bloomDay);
    int high = minim(bloomDay);
    int s = bloomDay.size();
    int mid = low +  (high - low)/2;
    int ans = 0;
    while(low<= high){
        // 1st edge condition
        if((b*f)>s){
            // no of flowers are less than the required flowers
            return -1;
        }

    }
}