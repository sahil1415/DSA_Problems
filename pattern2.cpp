#include<iostream>
    
using namespace std;
    
//int main()
//pattern 2
// {
//     int i=1;
//     while(i<=3){
//         int j=1;
//         while(j<=3){
//             cout<<i<<" ";
//             j++;
//         }
//         i++;
//         cout<<endl;
//     }
// return 0;
// }
// output
// 1 1 1 
// 2 2 2 
// 3 3 3 

//pattern 3
// {
//     int i=1;
//     while(i<=3){
//         int j=1;
//         while(j<=3){
//             cout<<j<<" ";
//             j++;
//         }
//         i++;
//         cout<<endl;
//     }
// }
//output
// 1 2 3 
// 1 2 3 
// 1 2 3 

//pattern 4
// {
//     int i=1;
//     while(i<=5){
//         int j=1;
//         while(j<=5){
//             cout<<(5-j)+1;
//             j++;
//         }
//         i++;
//         cout<<endl;      
//     }
// }
// output
// 54321
// 54321
// 54321
// 54321
// 54321

//pattern 5
// {
//     int i=1;
//     int count=1;
//     while(i<=3){
//         int j=1;
//         while(j<=3){
//             cout<<count<<" ";
//             j++;
//             count++;
//         }
//         i++;
//         cout<<endl;
//     }
// }
// output
// 1 2 3 
// 4 5 6
// 7 8 9

//pattern 6
//{
//     int i=0;
//     while(i<=2){
//         int j=1;
//         while(j<=3){
//             cout<<(i+j)<<" ";
//             j++;
//         }
//         i++;
//         cout<<endl;
//     }
// }

// output 
// 1 2 3 
// 2 3 4
// 3 4 5

//pattern 7
// {
//     int i=0;
//     while(i<=4){
//         int j=0;
//         while(j<=i){
//             cout<<"* ";
//             j++;
//         }
//         i++;
//         cout<<endl;
//     }
// }
// output 
// * 
// * *
// * * *
// * * * *
// * * * * *

//pattern 8
// {
//         int i=1;
//     while(i<=4){
//         int j=1;
//         while(j<=i){
//             cout<<i<<" ";
//             j++;
//         }
//         i++;
//         cout<<endl;
//     }
// }

// output 
// 1 
// 2 2
// 3 3 3
// 4 4 4 4


//pattern 9
// {
//     int i=0;
//     int count=1;
//     while(i<4){
//         int j=0;
//         while(j<=i){
//             cout<<count<<" ";
//             j++;
//             count++;
//         }
//         i++;
//         cout<<endl;
//     }
// }
// output 
// 1 
// 2 3
// 4 5 6
// 7 8 9 10

//pattern 10
// {
//     int i=1;
//     while(i<=4){
//         int j=1;
//         while(j<=i){
//             cout<<i<<" ";
//             j++;
//         }
//         i++;
//         cout<<endl;
//     }
// }

// output 
// 1 
// 2 2
// 3 3 3
// 4 4 4 4

//pattern 11
// {
//     int i=1;
//     while(i<=5){
//         int j=1;
//         while(j<=i){
//             cout<<(i-j)+1<<" ";
//             j++;
//         }
//         cout<<endl;
//         i++;
//     }
// }
// output 
// 1 
// 2 1
// 3 2 1
// 4 3 2 1
// 5 4 3 2 1

//pattern 12
// {
//     char ch='A';
//     int i=1;
//     while(i<=3){
//         int j=1;
//         while(j<=3){
//             cout<<ch<<" ";
//             j++;
//         }
//         i++;
//         ch++;
//         cout<<endl;
//     }
// }

// output 
// A A A 
// B B B
// C C C

//pattern 13
// {
//     int i=1;
//     while(i<=3){
//         int j=1;
//         char ch='A';
//         while(j<=3){
//             cout<<ch<<" ";
//             ch++;
//             j++;
//         }
//         i++;
//         cout<<endl;
//     }
// }

// output 
// A B C 
// A B C
// A B C

//pattern 14

// {
//     int i=1;
//     char ch='A';
//     while(i<=3){
//         int j=1;
//         while(j<=3){
//             cout<<ch<<" ";
//             j++;
//             ch++;
//         }
//         i++;
//         cout<<endl;
//     }
// }

// output 
// A B C 
// D E F
// G H I

//pattern 15

// {
//     int i=0;
//     while(i<=2){
//         char ch='A';
//         int j=1;
//         while(j<=3){
//             char ch1=ch+i;
//             cout<<ch1<<" ";
//             j++;
//             ch++;
//         }
//         cout<<endl;
//         i++;
//     }
// }

// output 
// A B C 
// B C D
// C D E

//pattern 16

// {
//     int i=1;
//     char ch='A';
//     while(i<=3){
//         int j=1;
//         while(j<=i){
//             cout<<ch<<" ";
//             j++;
//         }
//         i++;
//         ch++;
//         cout<<endl;
//     }
// }

// output 
// A 
// B B
// C C C

//pattern 17

// {
//     int i=1;
//     while(i<5){
//         int j=5;
//         while(j>i){
//             cout<<" ";
//             j--;
//         }
//         int k=1;
//         while(k<=i){
//             cout<<"*";
//             k++;
//         }
//         i++;
//         cout<<endl;
//     }
// }
// output 
//     *
//    **
//   ***
//  ****

//pattern 18

// {
//     int i=1;
//     while(i<5){
//         int j=5;
//         while(j>i){
//             cout<<"*"<<" ";
//             j--;
//         }
//         i++;
//         cout<<endl;
//     }
// }

// output 
// * * * * 
// * * *
// * *
// *

//pattern 19

// {

//     //printing the spaces  (1st triangle)
//     int i=1;
//     while(i<=5){
//         int j=5;
//         while(j>i){
//             cout<<" ";
//             j--;
//         }

//         //printing the second triangle
//         int k=1;
//         while(k<=i){
//             cout<<k;
//             k++;
//         }

//         //printing the 3rd triangle
//         int l=1;
//         while(l<i){
//             cout<<i-l;
//             l++;
//         }
//         i++;
//         cout<<endl;
//     }
// }

// //output
//     1
//    121
//   12321
//  1234321
// 123454321


//One final printing pattern question 
int main()
{

    int i=5;
    while(i>0){
        int j=1;
        while(j<=i){
            cout<<j;
            j++;
        }
        int k=5;
        while(k>i){
            cout<<"*";
            k--;
        }
        int l=5;
        while(l>i){
            cout<<"*";
            l--;
        }
        int m=0;
        while(m<i){
            cout<<i-m;
            m++;
        }
        i--;
        cout<<endl;
    }
}

// output 
// 1234554321
// 1234**4321
// 123****321
// 12******21
// 1********1
