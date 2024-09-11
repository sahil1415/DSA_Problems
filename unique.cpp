#include<iostream>
    // when we do XOR with same number we get 0
    // when we do XOR of a number and 0 we get the same number
    //Truth table of XOR
    /*A B Result
      0 0   0
      0 1   1
      1 0   1
      1 1   0*/
using namespace std;
    int uniqueFind(int *arr ,int size){
        int ans=0;
        for(int i=0; i<size; i++){
            ans=ans^arr[i];
        }
        return ans;
    }
int main()
{
    int a[9]={1,2,3,4,5,4,3,2,1};
    int unique = uniqueFind(a, 9);
    cout<<unique;
    cout<<endl;
    cout<<(1^2^3^4^5^4^3^2^1);
return 0;
}