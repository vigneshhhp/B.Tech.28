#include<stdio.h>
int main(){
    int size,flag=0;
    printf("Enter the size of the matrix:");
    scanf("%d",&size);
    int matrix[size][size],transpose[size][size];
    printf("Enter the elements of the matrix:\n");
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            scanf("%d",&matrix[i][j]);
        } 
    }
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            transpose[j][i]=matrix[i][j];
        }
    }
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            if(matrix[i][j]!=transpose[i][j]){
                flag=1;
                break;
            }  
        }
    if(flag==1){
        break;
    }
    }
    if(flag!=1){
        printf("The matrix is a Symmetric Matrix");
    }
    else{
        printf("The matrix is not Symmetric Matrix");
    }
    return 0;
}