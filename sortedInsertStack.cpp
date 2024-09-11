#include<iostream>
#include<bits/stdc++.h>
#include<stack>
using namespace std;
void sortedInsert(stack<int> &s, int element){
    if(element > s.top()){
        s.push(element);
        return;
    }
    int peeek = s.top();
    s.pop();
    sortedInsert(s, element);
    s.push(peeek);
    return;
}
int main()
{
    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    sortedInsert(s,15);

    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    
return 0;
}