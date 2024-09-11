#include <stack>
#include <stack>
#include<iostream>
using namespace std;

void stackDemo(){
    stack<int> s;

    cout<<"Is stack empty - " <<s.empty()<<endl;

    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    cout<<"Stack size - "<<s.size()<<endl;
    cout<<"Is stack empty - "<<s.empty()<<endl;

    cout<<"Stack Elements"<<endl;
    while(!s.empty()){
        int top = s.top();
        cout<<top<<" ";
        s.pop();
    }
    cout<<endl;  
}

int main()
{
    stackDemo();
return 0;
}