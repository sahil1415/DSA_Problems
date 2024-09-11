#include<stdio.h>
#include<stdlib.h>

int main(){
    int i,j;
    int a[5]={1,2,3,4,5};
    int *ptr;
    ptr=(int*)calloc(5,4);
    printf("Enter the elements of dynamically created array:");
    for(i=0; i<5; i++){
        // scanf("%d",(ptr+i));
        scanf("%d",ptr+i);
    }
    printf("Elements in the dynamically created array are: ");
    for(i=0;i<5;i++){
        // printf("%d\t",*(ptr+i));
        printf("%d\t",*(ptr+i));
    }
}