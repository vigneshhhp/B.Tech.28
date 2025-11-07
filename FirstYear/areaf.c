#include<stdio.h>
#define PI 3.141
float area(float a);
int main(){
    float a;
    printf("Enter the radius of circle:");
    scanf("%f",&a);
    printf("The Area of Circle with radius %0.2f is %0.2f\n",a,area(a));
    return 0;
}
float area(float a){
    return PI*a*a;
}