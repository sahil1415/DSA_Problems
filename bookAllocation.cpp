#include<bits/stdc++.h>
using namespace std;

int maxim(vector<int> v1,int n1){
    int maxi = 0;
    for(int i = 0; i<n1; i++){
        maxi  = max(maxi, v1[i]);
    }
    // cout<<"max of array="<<maxi<<endl;
    return maxi;
}
int summ(vector<int> v2, int n2){
    int sum = 0;
    for(int i=0; i<n2; i++){
        sum += v2[i];
    }
    // cout<<"sum of array="<<sum<<endl;
    return sum;
}
bool possibleSoln(vector<int> v3, int m, int st, int n3){
    int student = 1;
    int tpages = 0;
    for(int i= 0; i<n3; i++){
        if(tpages+v3[i]<=m){
            tpages += v3[i];
        }
        else{
            student++;
            if(student>st || v3[i]>m)
            return false;
            else
            tpages = 0;
            tpages = v3[i];
            }
        }
            return true;
    }

// s denotes no of student and n denotes no of books 
int findPages(vector<int> arr,int n, int s){
    int low = maxim(arr,n);
    int high = summ(arr,n);
    int ans = -1;
    int mid = low + (high - low)/2;
    while(low <= high){
        if(s>n){
            return ans;
        }
        if(possibleSoln(arr,mid,s,n)){
            ans = mid;
            high = mid -1;
        }
        else{
            low = mid +1;
        }
        mid = low + (high - low)/2;
    }
    return ans;
}


int main(){
    vector<int> v = {22,8,8,4,5};
    int student;
    int m = findPages(v,5,6);
    cout<<m;
}
 
