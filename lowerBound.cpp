#include<iostream>
#include<bits/stdc++.h>
    
using namespace std;
    
    int lowerBound(vector<int> v, int x){
        int start = 0;
        int end = v.size()-1;
        int mid = start + (end - start)/2;
        int ans = v.size();
        while(start <= end){
            if(v[mid] >= x){
                ans = mid; //now we have got the index which is equal but we have to find the smallest index
                end = mid -1; //checking left on the smaller indexes
            }
            else{
                start = mid +1;
            }
            mid = start + (end - start)/2;
        }
        return ans;
    }
int main()
{
    vector<int> v1 ={2,4,5,8,10,12};
    int i = lowerBound(v1, 0);
    cout<<"Lower bound = "<<i;
return 0;
}