#include <vector>
#include<iostream>
using namespace std;
void printSubsequence(string s, int index, string output){
    if(index == s.length()){
        // ans.push_back(output);
        // cnt++;
        cout<<output<<endl;
        return;
    }

    // Base Cases
    // include
    char ch = s[index];
    cout<<"call to include"<<endl;
    printSubsequence(s, index+1, output+ch);

    //exclude
    cout<<"call to exclude"<<endl;
    printSubsequence(s, index+1, output);
}
int main()
{
    string str = "xyz";
    int index = 0;
    string output = "";
    int cnt = 0;
    vector<string> ans;
    printSubsequence(str, index, output);
    // cout<<cnt<<endl;
    // for(auto it : ans){
    //     cout<<it<<endl;
    // }
return 0;
}