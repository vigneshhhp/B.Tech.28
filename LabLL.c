#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};
struct node *head=NULL,*prev=NULL,*current=NULL,*temp=NULL;

void insertNode(int value){
    struct node *newNode=(struct node *)malloc(sizeof(struct node));
    newNode->data=value;
    newNode->next=NULL;
    if(head==NULL){
        head=newNode;
    }
    else{
        temp=head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=newNode;
    }
}

void display(){
    if(head==NULL){
        printf("The List is Empty!");
    }
    else{
        temp=head;
        while(temp!=NULL){
            printf("%d->",temp->data);
            temp=temp->next;
        }
        printf("NULL\n");
    }
}

int main(){
    int choice,value;
    while(1){
        printf("Enter the choice:");
        printf("1.Insert Node\n2.Display List\n3.Exit\n");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
            printf("Enter the value to be inserted:");
            scanf("%d",&value);
            insertNode(value);
            printf("Node created");
            break;
        case 2:
            display();
            break;
        case 3:
            exit(0);    
        default:
            printf("Invalid Choice!"); 
       }
    }
}