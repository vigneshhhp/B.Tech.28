#include<stdio.h>
int main(){
    int a,b,temp;
    int *p1,*p2;
    printf("Enter the 2 numbers:");
    scanf("%d %d",&a,&b);
    p1=&a;
    p2=&b;
    temp=*p1;
    *p1=*p2;
    *p2=temp;
    printf("The swapped are:\n");
    printf("a = %d\nb = %d\n",*p1,*p2);
    return 0;
}