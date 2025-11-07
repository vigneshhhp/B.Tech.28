#include<stdio.h>
int main(){
    int a,b;
    printf("Enter First number:");
    scanf("%d",&a);
    printf("Enter Second number:");
    scanf("%d",&b);

    //int sum=a+b 
    //printf("The sum is %d",sum);     -----> This method can also be used.

    printf("The sum is %d \n",a+b);     //-----> Another way

    //printf("The sum of the two numbers %d and %d is %d",a,b,a+b);
    return 0;
}