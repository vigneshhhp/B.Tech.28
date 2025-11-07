#include<stdio.h>
#define PI 3.141
float area(float a);
int main(){
    float a=area(12.8);
    printf("The Area is %0.2f\n",a);
    return 0;
}
float area(float a){
    float result=PI*a*a;
    return result;
}