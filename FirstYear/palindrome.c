#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    int i,l=0;
    printf("Enter a string:");
    scanf("%s",str);
    l=strlen(str);
    for(i=0;i<l/2;i++){
        if(str[i]!=str[l-i-1]){
            printf("The string is not a palindrome\n");
            return 0;
        }
    }
    printf("The string is a Palindrome\n");
    return 0;
}