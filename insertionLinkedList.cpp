#include<stdlib.h>
#include<iostream>
using namespace std;

struct node{
    int data;
    struct node *next;
};
void addNode(struct node **head, int v)
{
    struct node *newNode; 
    newNode= (struct node*)malloc(sizeof(struct node));
    newNode->data = v;
    newNode->next = NULL;

    if(*head == NULL)
         *head = newNode;
    else
    {
        struct node *lastNode = *head;
        while(lastNode->next != NULL)
        {
            lastNode = lastNode->next;
        }
        lastNode->next = newNode;
    }
}
void printNode(struct node *head){
    struct node *temp;
    temp = head;

    while(temp!=NULL){
        cout<<temp -> data<<" ";
        temp = temp -> next;
    }
    // cout<<NULL;
}
void addNodeFirst(struct node **head, int v){

}
int main(){
    struct node *head = NULL;
    addNode(&head,1);
    addNode(&head,2);
    addNode(&head,3);
    printNode(head);
}