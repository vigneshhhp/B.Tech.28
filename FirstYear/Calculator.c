#include<stdio.h>
int sum(int a,int b){
    return a+b;
}
int diff(int a,int b){
    return a-b;
}
int prod(int a,int b){
    return a*b;
}
float div(int a,int b){
    if(b!=0){
        return a/b;
    }
    else{
        printf("Divison by zero;Error\n");
    } 
}
int main(){
    int c;
    printf("Type 1 for Addition \n 2 for Subtraction \n 3 for Multiplication \n 4 for Division\n :");
    scanf("%d",&c);
    int x,y;
    printf("Enter the 2 numbers for the operation:");
    scanf("%d %d",&x,&y);
    if(c==1){
        printf("The sum of the two numbers %d and %d is %d\n",x,y,sum(x,y));
    }
    else if(c==2){
        printf("The difference of the two numbers %d and %d is %d\n",x,y,diff(x,y));
    }
    else if(c==3){
        printf("The product  of the two numbers %d and %d is %d\n",x,y,prod(x,y));
    }
    else if(c==4){
        if(y!=0){
            printf("The division of the two numbers %d and %d is %0.2f\n",x,y,div(x,y));
        }
        else{
            printf("Division Not Possible\n");
        }
    }
    else{
        printf("Invalid Input\n");
    }
    return 0.0;
}