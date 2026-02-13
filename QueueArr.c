#include<stdio.h>
#include<stdlib.h>
#define MAX 5
int front=0,rear=-1;
int queue_arr[MAX];
void push(){
    int pushed_item;
    if(rear==MAX-1){
        printf("Queue Overflow");
    }
    else{
        printf("Enter the item to be pushed:");
        scanf("%d",&pushed_item);
        rear=rear+1;
        queue_arr[rear]=pushed_item;
        printf("Item pushed successfully\n\n");
    }
}

void pop(){
    if(rear==-1 || (front>rear)){
        printf("Queue Underflow");
    }
    else{
        printf("%d is popped from Queue\n\n",queue_arr[front]);
        front=front+1;
        if(front>rear){     
            front=0;
            rear=-1;
        }
    }
}

void display(){
    if(rear==-1 || (front>rear)){
        printf("The Queue is Empty!\n");
    }
    else{
        printf("The Queue has: ");
        for(int i=front;i<=rear;i++){
            printf("%d ",queue_arr[i]);
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
            case 4:exit(1);
                break;
            default:printf("Enter valid choice!\n");    
        }    
    }
    return 0;
}    