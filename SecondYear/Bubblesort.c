#include<stdio.h>
#include<time.h>
int main(){
    clock_t start, end;
    double time_taken;
    int arr[100],n,i,j,temp;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    printf("Enter %d elements \n",n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    start = clock();
    for(i=0;i<n-1;i++){
        int swapped=0;
        for(j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                swapped=1;
            }
        }
        if(swapped==0){
            break;
        }
    }
    end = clock();
    printf("The Sorted array is\n");
    for(i=0;i<n;i++){
        printf("%d  ",arr[i]);
    }
    time_taken = ((double)(end - start)) / CLOCKS_PER_SEC;
    printf("\nSearch completed in: %f seconds", time_taken);
    return 0;
}