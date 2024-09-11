#include<iostream>
#include<vector>
using namespace std;
void printSubArrays(vector<int> v, int start, int end){
    // base case
    if(end >= v.size()){
        return;
    }
    // recursive case
    for(int i = start; i<=end; i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    printSubArrays(v, start, end+1);
}
void printSub(vector<int> v){
    for(int start = 0; start< v.size(); start++){
        int end = start;
        printSubArrays(v, start, end);
    }
}
int main(){
    vector<int> v = {1,2,3,4,5,6,7};
    printSub(v);
return 0;
}