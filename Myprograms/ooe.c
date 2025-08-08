#include<stdio.h>
int main(){
    int a,b;
    printf("Enter any number:");
    scanf("%d",&a);
    (a%2==0)?printf("The number is an Even Number\n"):printf("The number is an Odd Number\n");
    return 0;
}