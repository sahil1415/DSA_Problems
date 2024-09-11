#include<iostream>
    
using namespace std;
    
int main()
//for loop
// {
//     int i,j;
//     for(i=0;i<=3;i++){
//         for(j=0;j<=3;j++)
//         {
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
// return 0;
// }

//whileloop
{
    int i=0;

    while(i<=3){
        int j=0;
        while(j<=3){
            cout<<"* ";
            j++;
        }
        i++;
        cout<<endl; 
    }
}