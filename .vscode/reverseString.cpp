#include<iostream>
using namespace std;

void reverse(string &s, int i, int j){

    // base case
    if(i > j){
        return;
    }
    // recursive case
    swap(s[i], s[j]);
    reverse(s, i+1, j-1);
}
int main()
{
   string s = "Sahil Ansari";
   int i = 0;
   int j = s.length() - 1;
   reverse(s, i, j);
   cout<<s; 
return 0;
}