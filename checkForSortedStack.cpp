#include<bits/stdc++.h>
// #include<stack>
#include<iostream>
using namespace std;
bool sortedStack(stack<int> &s, int element1){
    if(s.empty()){
        return true;
    }

    int element2 = s.top();
    s.pop();
    if(element2 < element1){
        bool recAns =  sortedStack(s, element2);
        s.push(element2);
        return recAns;
    }
     return false;
}
int main()
{
    stack<int> s;

    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    cout<<"Stack Sorted?? "<<sortedStack(s, INT_MAX)<<endl;
    cout<<"Is stack Empty?? "<<s.empty()<<endl;
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    } 

return 0;
}