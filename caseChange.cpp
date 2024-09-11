#include<iostream>
#include<string.h>
using namespace std;
int getLenght(char arr[], int n){
    int count = 0;
    for(int i = 0; i<n; i++){
        if(arr[i] == '\0'){
            break;
        }
        else{
            count++;
        }
    }
    return count;
}
void upperCase(char arr[], int n){
    int length = getLenght(arr,n);
    for(int i =0; i<n; i++){
        char ch = arr[i];
        if(ch >= 'a' && ch <= 'z'){
            ch = ch - 'a' +'A';
        }
        arr[i] = ch;
    }
}
void Lowercase(char arr[], int n){
    int length = getLenght(arr, n);
    for(int i = 0; i<n; i++){
        char ch =  arr[i];
        if(ch >= 'A' && ch <= 'Z'){
            ch = ch - 'A' + 'a';
        }
        arr[i] = ch;
    }
}
void reverse(char arr[], int n){
    int l = getLenght(arr, n);
    int i = 0;
    int j = l-1;
    while(i <= j){
        swap(arr[i], arr[j]);
        i++;
        j--;
    }
}
bool palindrome(char arr[], int n){
    // upperCase(arr, n);
    int l = getLenght(arr, n);
    int i = 0;
    int j = l-1;
    bool ans;
    while( i < j){
        if(arr[i] == arr[j]){
            i++;
            j--;
        }
        else{
            return false;
        }
    }
    return true;
}
int main()
{
    char arr[] = "A man, a plan, a canal: Panama";
    // cout<<"Enter anything ";
    cin.getline(arr,100);
    cout<<"Length = "<<getLenght(arr,100)<<endl;
    upperCase(arr,100);
    cout<<arr<<endl;
    Lowercase(arr, 100);
    cout<<arr<<endl;
    reverse(arr,100);
    cout<<arr<<endl;
    cout<<"Palindrome - "<<palindrome(arr, 100);


return 0;
}