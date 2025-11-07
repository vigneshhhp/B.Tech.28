#include<stdio.h>
void change(int x[]){
    for(int i=0;i<12;i++){
        x[i]=2*x[i];
    }
}
int main(){
    int a[12]={11,23,4,2,5,7,45,36,54,77,88,99};
    change(a);
    for(int i=0;i<12;i++){
        printf("%d\t",a[i]);
    }
    return 0;
}