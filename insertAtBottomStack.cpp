#include<bits/stdc++.h>
#include<stack>
#include<iostream>
using namespace std;
void insertAtBottom(stack<int> &s, int value){
    if(s.empty()){
        s.push(value);
        return;
    }
    int top = s.top();
    s.pop();
    insertAtBottom(s, value);
    s.push(top);
    return;
}
int main()
{
    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    insertAtBottom(s, 100);
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
return 0;
}