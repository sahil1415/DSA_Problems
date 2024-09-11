#include<bits/stdc++.h>
using namespace std;



int main(){
    int n;
   
    cout<<"Enter the size if the array -";
    cin>>n;
     int q = n;
    int arr[n];
    cout<<"Enter the array elements"<<endl;
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }


    // precompute

    int hash[13] = {0};
    for(int i = 0; i<n; i++){
        hash[arr[i]] += 1;
    }
 
    cout<<"Enter numbers you want to check"<<endl;
    while(q--){
        int number;
        cin>>number;
        cout<<hash[number]<<endl;
    }
}

/*
  5
  1 3 2 1 3
  5
  1
  4
  2
  3
  12
  */