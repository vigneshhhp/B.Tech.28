#include<stdio.h>
#include<string.h>
int main(){
    char str[50];
    printf("Enter a string:");
    //scanf("%[^\n]",str);
    fgets(str,sizeof(str),stdin);
    char *p;
    p=str;
    int len;
    len=strlen(str);
    printf("The reversed string is:");
    for(int i=len-1;i>=0;i--){
        printf("%c",*(p+i));
    }
    return 0;
}