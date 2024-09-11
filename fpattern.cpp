#include<iostream>
using namespace std;

void fullPyramid(int n){
    // outer loop
    for(int row=0; row<n; row++){
        // inner loops for columns]
        //1. spaces
        for(int col = 0; col < n-row-1; col++){
            cout<<" ";
        }
        //2. stars
        for(int col = 0; col < row+1; col++){
            cout<<"* ";
        }
        cout<<endl;
    }
}

void invertedFullPyramid(int n){
    for(int row =0; row<n; row++){
        // spaces
        for(int col = 0; col < row; col++){
            cout<<" ";
        }
        // stars
        for(int col = 0; col< n-row; col++){
            cout<<"* ";
        }
        cout<<endl;
    }
}

void diamond(int n){
        for(int row=0; row<n; row++){
        // inner loops for columns]
        //1. spaces
        for(int col = 0; col < n-row-1; col++){
            cout<<" ";
        }
        //2. stars
        for(int col = 0; col < row+1; col++){
            cout<<"* ";
        }
        cout<<endl;
    }
        for(int row =0; row<n; row++){
        // spaces
        for(int col = 0; col < row; col++){
            cout<<" ";
        }
        // stars
        for(int col = 0; col< n-row; col++){
            cout<<"* ";
        }
        cout<<endl;
    }
}
void hollowPyramid(int n){
    // outer loop
    for(int row = 0; row<n; row++){
        // inner loop
        // 1.spaces
        for(int col = 0; col < n-row-1; col++){
            cout<<" ";
        }
        // 2. stars with condition
        for(int col = 0; col < row+1; col++){
            if(row == 0 || row == n-1 || col == 0 || col == row){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
}

void invertedHollowPyramid(int n){
    //outer loop
    for(int row = 0; row<n; row++){
        // spaces
        for(int col = 0; col < row; col++){
            cout<<" ";
        }
        // stars
        for(int col = 0; col< n-row; col++){
            if(row == 0 || row == n-1 || col == 0|| col == n-row-1){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
}

void hollowDiamond(int n){
        for(int row=0; row<n; row++){
        // inner loops for columns]
        //1. spaces
        for(int col = 0; col < n-row-1; col++){
            cout<<" ";
        }
        //2. stars
        for(int col = 0; col < row+1; col++){
           if(row == 0 || col == 0 || col == row){
            cout<<"* ";
           }
           else{
            cout<<"  ";
           }
        }
        cout<<endl;
    }
        for(int row =0; row<n; row++){
        // spaces
        for(int col = 0; col < row; col++){
            cout<<" ";
        }
        // stars
        for(int col = 0; col< n-row; col++){
            if(row == n-1 || col ==0 || col == n-row-1){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
}
void mixedPyramid(int n){
    // 1st part
    for(int row = 0; row < n; row++){
        // 1st pyramid stars
        for(int col = 0; col < n-row; col++){
            cout<<"* ";
        }
        // 2nd pyramid spaces
        for(int col = 0; col < (2*row)+1; col++){
            cout<<"  ";
        }
        // 3rd pyramid stars
        for(int col = 0; col< n - row; col++){
            cout<<"* ";
        }
        cout<<endl;
    }
        //2nd part 
        for(int row = 0; row < n; row++){
        // 1st pyramid stars
        for(int col = 0; col < row+1; col++){
            cout<<"* ";
        }
        // 2nd pyramid spaces
        for(int col = 0; col < (2*n)-(2*row)-1; col++){
            cout<<"  ";
        }
        // 3rd pyramid stars
        for(int col = 0; col< row+1; col++){
            cout<<"* ";
        }
        cout<<endl;
    }
}

void fancyPattern(int n){
    for(int row = 0; row < n; row++){
        for(int col = 0; col< (2*row)+1; col++){
            if(col % 2 == 0){
                cout<<row+1;
            }
            else{
                cout<<" * ";
            }
        }
        cout<<endl;
    }
}
void fullyFancyPattern(int n){
    for(int row = 0; row < n-1; row++){
        for(int col = 0; col< (2*row)+1; col++){
            if(col % 2 == 0){
                cout<<row+1;
            }
            else{
                cout<<" * ";
            }
        }
        cout<<endl;
    }
    n = n--;
    for(int row = 0; row < n; row++){
        for(int col = 0; col<(2*(n-row)-1); col++){
            if(col%2 == 0){
                cout<<n-row;
            }
            else{
                cout<<" * ";
            }
        }
        cout<<endl;
    }
}

void ABCBA(int n){
    for(int row = 0; row<n; row++){
        char ch = 'A'-1;
        for(int col = 0; col< row+1; col++){
            ch++;
            cout<<" "<<char(ch)<<" ";
        }
        ch--;
        while(ch>= 'A'){
            cout<<""<<ch<<" ";
            ch--;
        }
        cout<<endl;
    }
}
int main()
{
    int n;
    cout<<"Enter the number of rows:";
    cin>>n;

    // cout<<"FullPyramid - "<<endl;
    // fullPyramid(n);
    // cout<<"InvertedPyramid - "<<endl;
    // invertedFullPyramid(n);
    // cout<<"Diamond - "<<endl;
    // diamond(n);
    // cout<<"HollowPyramid - "<<endl;
    // hollowPyramid(n);
    // cout<<"InvertedHollowPyramid - "<<endl;
    // invertedHollowPyramid(n);
    // cout<<"Hollow Diamond - "<<endl;
    // hollowDiamond(n);
    // cout<<"Mixed Pyramid - "<<endl;
    // mixedPyramid(n);
    // fancyPattern(n);
    // fullyFancyPattern(n);

    ABCBA(n);
return 0;
}