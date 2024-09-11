#include<stdio.h>
#include<stdlib.h>

int main(){
    //no of ways it can be initialised
    //1st
    int a[3][4]={{1,2,3,4},{4,5,6,7},{3,5,1,2}};

    //2nd using pointer array
    int *b[3];
    b[0]=(int*)malloc(4*sizeof(int));
    b[1]=(int*)malloc(4*sizeof(int));
    b[2]=(int*)malloc(4*sizeof(int));
    
    //3rd using double pointer


}