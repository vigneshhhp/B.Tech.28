#include<stdio.h>
int main(){
    int *p1,num=10 ;
    p1=&num;
    p1++;
    printf("The address is %p\n",p1);
    printf("The Value is %d\n",*p1);
    return 0;
}