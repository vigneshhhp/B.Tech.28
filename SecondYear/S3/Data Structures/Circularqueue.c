#include<stdio.h>
#include<stdlib.h>
#define MAX 5
int front=-1,rear=-1;
int cqueue_arr[MAX];
void push(){
    int pushed_item;
    if(front==0 && rear==MAX-1 || front==rear+1){
        printf("Circular Queue is Overflow");
        return;
    }
    
    printf("Enter the item to be pushed:");
    scanf("%d",&pushed_item);
    if(front==-1){
        front=0;
        rear=0;
    }
    else if(rear==MAX-1){
        rear=0;
    }
    else{
        rear=rear+1;
    }
    cqueue_arr[rear]=pushed_item;
    printf("Item pushed successfully\n\n");
    
}

void pop(){
    if(front==-1){
        printf("Circular Queue is Underflow");
        return;
    }
    printf("%d is popped from Queue\n\n",cqueue_arr[front]);
    if(front==rear){
        front=-1;
        rear=-1;
    }
    else{
        if(front==MAX-1){
            front=0;
        }
        else{
            front++;
        }
    }
}

void display(){
    int i,fp=front,rp=rear;
    if(front==-1){
        printf("The Queue is Empty!\n");
        return;
    }
    printf("Queue ELements are:\n");
    if(fp<=rp){
        for(i=fp;i<=rp;i++){
            printf("%d ",cqueue_arr[i]);
        }
    }
    else{
        for(i=fp;i<=MAX-1;i++){
            printf("%d ",cqueue_arr[i]);
        }
        for(i=0;i<=rp;i++){
            printf("%d ",cqueue_arr[i]);
        }
    }
}

int main(){
    int choice;
    while(1){
        printf("Enter your choice for operation\n1.Push 2.Pop 3.Display 4.Exit :");
        scanf("%d",&choice);
        switch(choice){
            case 1:push();
                break;
            case 2:pop();
                break;
            case 3:display();
                break;
            case 4:exit(0);
                break;
            default:printf("Enter valid choice!\n");    
        }    
    }
    return 0;
}    