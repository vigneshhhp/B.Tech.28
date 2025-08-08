#include<stdio.h>
int main(){
    char name[50];
    puts("Enter Your Name:");
    fgets(name,sizeof(name),stdin);
    puts(name);
    return 0;
}