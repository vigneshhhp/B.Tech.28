#include<stdio.h>
int main(){
    int age=19;
    printf("My age is %d\n",age);
    float pi=3.14164756;
    printf("The value of pi is %0.3f \n",pi);
    char letter='V';
    printf("Character is %p \n",&letter);
    //char name="Vignesh";
    //printf("My name is %s",name);
    int num=20;
    printf("Enter any number:");
    scanf("%d",&age);
    printf("The new age is %d\n",age);
    printf("The size of the variable is %ld bytes.\n",sizeof(int));
    printf("The size of the variable is %ld bytes.\n",sizeof(float));
    printf("The size of the variable is %ld bytes.\n",sizeof(double));
    printf("The size of the variable is %ld bytes.\n",sizeof(long double));
    printf("The size of the variable is %ld bytes.\n",sizeof(unsigned int));
    printf("The size of the variable is %ld bytes.\n",sizeof(long long));
    float x=3.14285714285714285714285;
    double y =3.14285714285714285714285;
    printf("%0.20f\n",x);
    printf("%0.20lf\n",y);
    return 0;
}