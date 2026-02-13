#include<stdio.h>
#include<time.h>
#include<stdlib.h>
void bubblesort(int arr[],int n){
    clock_t start, end;
    double time_taken;
    int temp;
    start = clock();
    for(int i=0;i<n-1;i++){
        int swapped=0;
        for(int j=0;j<n-i-1;j++){
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
    printf("The Sorted Array is:");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    time_taken = ((double)(end - start)) / CLOCKS_PER_SEC;
    printf("\nSorting completed in: %f seconds", time_taken);
}

void insertionsort(int arr[],int n){
    clock_t start, end;
    start=clock();
    double time_taken;
    for(int i=1;i<n;i++){
        int temp=arr[i];
        int j=i-1;
        while(j>=0 && arr[j]>temp){
            arr[j+1]=arr[j];
            j--;
        }
    arr[j+1]=temp;    
    }
    printf("The Sorted Array is:");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    end=clock();
    time_taken=((double)(end - start))/CLOCKS_PER_SEC;
    printf("\nSorting completed in: %f seconds", time_taken);
}

void selectionsort(int arr[],int n){
    clock_t start, end;
    start=clock();
    double time_taken;
    int small;
    for(int i=0;i<n-1;i++){
        small=i;
        for(int j=i+1;j<n;j++){
            if(arr[small]>arr[j]){
                small=j;
            }
        }
        if(small!=i){
            int temp=arr[small];
            arr[small]=arr[i];
            arr[i]=temp;
        }
    }
    printf("The Sorted Array is:");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    end=clock();
    time_taken=((double)(end - start))/CLOCKS_PER_SEC;
    printf("\nSorting completed in: %f seconds", time_taken);
}

int main(){
    int i,n,choice;
    printf("Enter the number of elements:");
    scanf("%d", &n);
    int arr[50],orig[50];
    for(i=0;i<n;i++){
        printf("Enter the %d element:",i+1);
        scanf("%d",&orig[i]);
    }

    while(1){
        for(i=0;i<n;i++){
            arr[i]=orig[i];
        }
        printf("\n==== Menu ====\n1.Bubble Sort\n2.Selection Sort \n3.Insertion Sort\n4.Exit\n\nChoose Your Option:");
        scanf("%d",&choice);
        switch(choice){
            case 1: bubblesort(arr,n);
                break;
            case 2: selectionsort(arr,n);
                break;
            case 3: insertionsort(arr,n);
                break;
            case 4: printf("Exited");exit(0);    
            default:printf("Enter Valid Option");            
        }
    }
    return 0;
}