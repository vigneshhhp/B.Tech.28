#include<stdio.h>
int main(){
    int row,col;
    printf("Enter the number of rows and columns");
    scanf("%d %d",&row,&col);
    int matrix[row][col],transpose[row][col];
    printf("Enter the elements of the matrix:\n");
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            scanf("%d",&matrix[i][j]);
        } 
    }
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            transpose[j][i]=matrix[i][j];
        }
    }
    printf("The Transpose of the matrix is:\n");
    for(int i=0;i<col;i++){
        for(int j=0;j<row;j++){
            printf("%d ",transpose[i][j]);
        }
        printf("\n");
    }
    return 0;
}
