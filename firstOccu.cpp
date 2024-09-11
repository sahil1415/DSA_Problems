#include<iostream>
#include<bits/stdc++.h>
    
using namespace std;
    
    int firstOccur(vector<int> v, int n){
        int start = 0;
        int end = v.size()-1;
        int mid = start + (end - start)/2;
        int first = -1;

        while(start <= end){
            if(v[mid] == n){
                first = mid;
                end = mid - 1;
            }
            else if(n > v[mid]){
                start = mid + 1;
            }
            else{
                end = mid - 1;
            }
            mid = start + (end - start)/2;
        }
        return first;
    }
int main()
{
    vector<int> v1 = {5,7,7,8,8,10};
    int f = firstOccur(v1, 6);
    cout<<"First Occurence = "<<f;
return 0;
}