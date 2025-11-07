#include<stdio.h>
int main(){
    int n,i=0;
    printf("Enter any limit;");
    scanf("%d",&n);
    do{
        printf("%d",i);
        i++
    }while(i<n);
    return 0;
}