#include <vector>
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
    int compress(vector<char>& chars) {
        int n = chars.size();
        int i=0, j=0, cnt=1;

        while(j < n){
            char curChar = chars[j];
            if(j+1 < n && chars[j] == chars[j+1]){
                cnt++;
            }
            else{
                if(cnt > 1){
                    chars[i] = curChar;
                    i++;
                    chars[i] = '0' + cnt;
                    cnt = 1;
                    i++;
                    chars.erase(chars.begin()+i+1, chars.begin()+j-1);
                }
                else{
                    chars[i] = curChar;
                    i++;
                }
            }
            j++;
        }
        for(auto it : chars){
            cout<<it<<" ";
        }
        cout<<endl;
        return 0;
    }

int main()
{
    std::vector<char> v = {'a','a','b','c','c','c','d'};
    // vector<char> v = {'a'};
    cout<<compress(v);
return 0;
}