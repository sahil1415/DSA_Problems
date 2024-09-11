#include<iostream>
#include<stack>
using namespace std;
void insertInstack(stack<int> &s, int value){
    if(s.empty() || value >= s.top()){
        s.push(value);
        return;
    }

    int topElm = s.top();
    s.pop();
    insertInstack(s, value);
    s.push(topElm);
    return;
}
int main(){

    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);

    insertInstack(s, 23);
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
return 0;
}