#include<bits/stdc++.h>
#include<iostream>
#include<stack>

using namespace std;
int middleElementStack(stack<int> &s, int index, int size){
    if(index == size/2){
        int top = s.top();
        s.pop();
        return top;
    }
    int peek = s.top();
    s.pop();
    int mid = middleElementStack(s, index+1, size);
    s.push(peek);
    return mid;
}
int main()
{
    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.push(60);
    s.push(70);
    int mid = middleElementStack(s, 0, s.size());
    cout<<mid<<endl;
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
return 0;
}