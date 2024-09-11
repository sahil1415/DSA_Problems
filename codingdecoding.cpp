#include<iostream>
#include<vector>
#include<bits/stdc++.h>
#include <map>

using namespace std;
    void normalise(string &str){
        unordered_map<char, char> mpp;
        char start = 'a';
        for(int i=0; i<str.length(); i++){
             char currChar = str[i];
            if(mpp.find(currChar) == mpp.end()){
                mpp[currChar] = start;
                start++;
            }
        }
        for(auto it : mpp){
            cout<<"mapped values "<<it.first<<" "<<it.second<<endl;
        }
        cout<<endl;
        //now update the string with newely mapped characters
        for(int i=0; i<str.length(); i++){
            char mappedChar = mpp[str[i]];
            str[i] = mappedChar;
        }
        for(int i=0; i< str.length(); i++){
            cout<<"updated string values "<<str[i]<<endl;
        }
        cout<<endl;
    }
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        vector<string> v;
        cout<<"mappint the pattern first "<<endl;
        normalise(pattern);

        cout<<"mapping and updating actual string vector"<<endl;
        for(int i=0; i<words.size(); i++){
            string strWord = words[i];
            normalise(strWord);
            if(strWord.compare(pattern) == 0){
                v.push_back(words[i]);
            }
        }
        return v;
    }
int main()
{
    vector<string> str = {"abc","deq","mee","aqq","dkd","ccc"};
    string message = "abb";
    vector<string> v1 = findAndReplacePattern(str, message);
    for(int i=0; i<v1.size(); i++){
        cout<<v1[i]<<" ";
    }
return 0;
}
