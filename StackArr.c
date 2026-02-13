#include<stdio.h>
#include<stdlib.h>
#define MAX 5
int top=-1;
int stack_arr[MAX];
void push(){
    int pushed_item;
    if(top==MAX-1){
        printf("Stack Overflow");
    }
    else{
        printf("Enter the item to be pushed:");
        scanf("%d",&pushed_item);
        top=top+1;
        stack_arr[top]=pushed_item;
        printf("Item pushed successfully\n\n");
    }
}

void pop(){
    if(top==-1){
        printf("Stack Underflow");
    }
    else{
        printf("%d is popped from stack\n\n",stack_arr[top]);
        top=top-1;
    }
}

void display(){
    if(top==-1){
        printf("Stack is Empty!");
    }
    else{
        printf("The Stack has:\n");
        for(int i=top;i>=0;i--){
            printf("%d\n",stack_arr[i]);
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
            default:printf("Enter valid choice!");    
        }    
    }
    return 0;
}    