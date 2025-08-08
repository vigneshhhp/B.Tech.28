#include<stdio.h>
int main(){
    int n,i=0,sum=0;
    printf("Enter any limit:");
    scanf("%d",&n);
    /*do{
        sum=sum+i;
        i++;
    }while(i<n+1);
    */
    for(i;i<=n;i++){
        sum=sum+i;
    }
    printf("The sum first %d natural numbers is %d",n,sum);
    return 0;
}