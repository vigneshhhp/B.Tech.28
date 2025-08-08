#include<stdio.h>
int main(){
    int a,b,result;
    float c;
    printf("Enter 2 integer values and 1 float value:");
    result= scanf("%d %d %f",&a,&b,&c);
    printf("The entered values are %d ,%d ,%f\n",a,b,c);
    printf("The result is %d\n",result);
    return 0;
}