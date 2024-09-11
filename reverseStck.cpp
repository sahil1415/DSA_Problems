#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void insertAtBottom(stack<int> &s, int val){
    if(s.empty()){
        s.push(val);
        return;
    }
    int top = s.top();
    s.pop();
    insertAtBottom(s, val);
    s.push(top);
    return;
}
void reverse(stack<int> &s){
    if(s.empty()){
        return;
    }
    int top = s.top();
    s.pop();
    reverse(s);
    insertAtBottom(s, top);
    return;
}
int main()
{
    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);

    // while(!s.empty()){
    //     cout<<s.top()<<" ";
    //     s.pop();
    // }
    reverse(s);
        while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
return 0;
}