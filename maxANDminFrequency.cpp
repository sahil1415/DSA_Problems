#include<bits/stdc++.h>
using namespace std;

vector<int> getFrequencies(vector<int>& v) {
    // Write Your Code Here
    map<int, int> m;
    int n = v.size();
    for(int i = 0; i<n; i++){
        m[v[i]]++;
    }

    int maxEle = INT_MAX;
    int minEle = INT_MIN;
    int maxFreq = 0;
    int minFreq = n;
    for(auto it : m){
        if(it.second > maxFreq){
            maxFreq = it.second;
            maxEle = it.first;
        }

        else if(it.second == maxFreq && it.first < maxEle){
            maxEle = it.first;
        }
        if(it.second < minFreq){
            minFreq = it.second;
            minEle = it.first;
        }

        else if(it.second == maxFreq && it.first < minEle){
            minEle = it.first;
        }
    }
    vector<int> v1;
    v1.push_back(maxEle);
    v1.push_back(minEle);

    return v1;

}

int main(){
    vector<int> v3 = {1,2,3,1,1,12,34,32,1,3};
    vector<int> v2 = getFrequencies(v3);

    cout<<v2[0]<<" "<<v2[1];
}