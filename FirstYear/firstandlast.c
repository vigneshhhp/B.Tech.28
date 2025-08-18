#include<stdio.h>
int main(){
    int n,x,y,z,sum;
    printf("Enter any number:");
    scanf("%d",&n);
    if(n!=0){
        y=n%10;
        z=n;
        do{
            z=z/10;
        }while(z>=10);
        sum=z+y;
        printf("The sum of first and last digits of the number %d is %d",n,sum);
    }
    else{
        printf("Cannot enter zero");
    }
    return 0;
}