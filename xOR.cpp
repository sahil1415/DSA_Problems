#include<iostream>
using namespace std;

//same 0 and different 1

int findDuplicate(int arr[], int size) 
{
    // Write your code here
    int ans=0;
    //Xor ing all array elements in themselves
    for(int i=0; i<size; i++){
        ans = ans ^ arr[i];
        cout<<ans<<" ";
    }
    cout<<endl<<"Answer after loop 1st= "<<ans<<endl;
    // xor ing all array elements from [1- to n-1]
    for(int i=0; i<size; i++){
        ans = ans ^ i;
        cout<<ans<<" ";
    }
    cout<<endl;
    cout<<endl<<"answer after 2nd loop ="<<ans;
	return ans;
}
int main(){
    int a[9]={1,2,3,4,5,6,7,8,1};
    int n=findDuplicate(a,9);
    cout<<endl;
    cout<<"Duplicate Element = "<<n;
    cout<<endl;
    // cout<<(1^2^3^4^5^6^7^8^1);
}
// int main(){
//     int a=4;
//     int b=5;
//     cout<<(a^a)<<endl ; //=0
//     cout<<(b^a)<<endl;  //=1
//     cout<<(0^a)<<endl;  //=4
//     cout<<(1^a)<<endl;        //=5
//     cout<<(9^2);

//     // same number 0
//     // 0 xor an number = number
// }
