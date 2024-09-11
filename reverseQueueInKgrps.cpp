#include<iostream>
#include<queue>
#include<stack>
using namespace std;
void reverseKgrps(queue<int> &q, int k, int size){
    if(size < k){
        while(size--){
            int front = q.front();
            q.pop();
            q.push(front);
        }
        return;
    }
    int k1 = k;
    stack<int> s;
    while(k1--){
        int front = q.front();
        q.pop();
        s.push(front);
    }
    while(!s.empty()){
        int top = s.top();
        s.pop();
        q.push(top);
    }
    reverseKgrps(q, k, size-k);

}
void traverse(queue<int> q){
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
    cout<<endl;
}
int main()
{
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(60);
    q.push(70);
    q.push(80);
    q.push(90);
    q.push(100);
    q.push(110);
    q.push(120);
    // q.push(130);
    // q.push(140);
    // q.push(150);

    traverse(q);

    reverseKgrps(q, 4, 12);
    traverse(q);
return 0;
}