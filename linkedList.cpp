#include<iostream>
#include<stdlib.h>
using namespace std;

int main(){
    struct node{
    char data;
    struct node *next;
};

struct node *n1;
struct node *n2;
struct node *n3;

n1= (struct node*)malloc(sizeof(struct node));
n2= (struct node*)malloc(sizeof(struct node));
n3= (struct node*)malloc(sizeof(struct node));

n1->data ='1';
n2->data ='2';
n3->data ='4';

n1-> next = n2;
n2-> next = n3;
n3-> next = NULL;

struct node *temp=n1;

while(temp!=NULL){
    cout<<temp->data<<" ";
    temp=temp->next;
}
cout<<NULL;
return 0;
}
