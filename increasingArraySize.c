#include<stdio.h>
#include<stdlib.h>

int main(){
    int *p,*q;
    int i,j;
    p=(int*)malloc(5*sizeof(int));
    p[0]=1;p[1]=2;p[2]=3;p[3]=4;p[4]=5;
    
    q=(int*)malloc(10*sizeof(int));

    for(i=0;i<5;i++)
        q[i]=p[i];
        
    free(p);
    p=q;
    q=NULL;
    for(j=0;j<10;j++){
        printf("%d\t",p[i]);
    }
}