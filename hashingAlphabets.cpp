#include<bits/stdc++.h>
using namespace std;

int main(){

    string s;
    cout<<"Enter the string - ";
    cin>>s;

    //precompute
    int n = s.length();
    int hash[26] = {0};
    for(int i = 0; i<n; i++){
        hash[s[i] - 'a'] += 1;
    }

    // checking
    char ch;
    cout<<"Enter the character you want to check - ";
    cin>>ch;
    cout<<hash[ch - 'a'];
}