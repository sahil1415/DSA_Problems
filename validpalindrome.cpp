#include<iostream>
using namespace std;

    bool checkpalindrome(string s){
        int n = s.length();
        int l = 0;
        int r = n-1;
        while(l < r){
            if(s[l] != s[r]){
                return false;
            }
            else{
                l++;
                r--;
            }
        }
        return true;

    }
    bool isPalindrome(string s) {
        string s1;
        int n = s.length();
        for(int i=0; i<n; i++){
            if(!isalpha(s[i])){
                continue;
            }
            else{
                s1.push_back(tolower(s[i]));
            }
        }
        cout<<s1;
        if(checkpalindrome(s1)){
            return true;
        }
        else{
            return false;
        }

    }

int main()
{
    string s = "OP";
    // string s = "race a car";
    cout<<isPalindrome(s);
return 0;
}
