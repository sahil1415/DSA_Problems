#include<iostream>
using namespace std;

void printPermutation(string str, int i){
    // base case
    if(i >= str.length()){
        cout<<str<<" ";
        return;
    }

    // recursion case
    for(int j = i; j<str.length(); j++){
        swap(str[i], str[j]);

        printPermutation(str, i+1);

        // backtracking the string when passed by reference
        // swap(str[i], str[j]);
    }
    return;
}
int main()
{
    string str = "abc";
    int i = 0;
    printPermutation(str, i);
return 0;
}