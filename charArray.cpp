#include<iostream>
using namespace std;
int main()
{
    char arr[100];
    cout<<"Enter your name"<<endl;
    cin.getline(arr,100, '\t');
    // I can type any thing but if i use tab in my typing the output generate will not 
    // consist of the content after pressing tab
    cout<<arr;
return 0;
}