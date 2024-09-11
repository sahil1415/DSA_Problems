#include<bits/stdc++.h>
using namespace std;

void reverseArray(vector<int> &v, int front, int rear){
    if(front>=rear) return;

    swap(v[front], v[rear]);
    reverseArray(v, front+1, rear-1);
}
int main(){
    vector<int> v1 = {1,2,3,4,5,6,7};
    int front = 0;
    int rear = v1.size()-1;   
    reverseArray(v1, front, rear);
    for(auto it : v1){
        cout<<it<<" ";
    }
return 0;
}