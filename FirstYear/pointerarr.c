#include<stdio.h>
int main(){
    int arr[5]={1,2,3,4,5};
    int *p;
    p=arr;
    printf("%p\n",(p+2));
    return 0;
}