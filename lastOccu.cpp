#include<iostream>
#include<bits/stdc++.h>
    
using namespace std;
    
    int lastOccur(vector<int> v, int n){
        int start = 0;
        int end = v.size()-1;
        int mid = start + (end - start)/2;
        int last = -1;

        while(start <= end){
            if(v[mid] == n){
                last = mid;
                start = mid + 1;    //checking elements on the right hand side
            }
            else if(n < v[mid]){
                end = mid - 1;
            }
            else{
                start = mid + 1;
            }
            mid = start + (end - start)/2;
        }
        return last;
    }
int main()
{
    vector<int> v1 = {5,7,7,8,8,10};
    int l = lastOccur(v1, 10);
    cout<<"Last Occurence = "<<l;
return 0;
}