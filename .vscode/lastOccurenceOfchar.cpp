#include<iostream>
using namespace std;

void lastOccurenceOfChar(string s, int i, char ch, int &index){
    if(s[i] == ch){
        index = i;
    } 
    // base case
    if(i > s.length()){
        return;
    }
    // recursive case
    lastOccurenceOfChar(s, i+1, ch, index); 

}
int main()
{   int index = -1;
    string s = "abcdrefdjkldfg";
    char ch = 'g';
    int i = 0;
    lastOccurenceOfChar(s, i, ch, index);
    cout<<index;
return 0;
}