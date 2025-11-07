#include<stdio.h>
#include<string.h>
struct student{
    char name[20];
    int age,rollno;
    float SGPA;
};
int main(){
    struct student s1;
    strcpy(s1.name,"Vignesh");
    s1.age=20;
    s1.rollno=67;
    s1.SGPA=8.43;
    printf("My name is %s and my age is %d.My Roll No is %d.My SGPA is %0.2f\n",s1.name,s1.age,s1.rollno,s1.SGPA);
    return 0;
}