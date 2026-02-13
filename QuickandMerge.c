#include <stdio.h> 
#include <stdlib.h>
#include<time.h>
int partition(int arr[], int low, int high){
    int pivot=arr[low];
    int start=low+1,end=high;
    while(start<=end){
        while(start<=high && arr[start]<=pivot){
            start++;
        }
        while (end>=low && arr[end]>pivot){
            end--;
        }
        if(start<end){
            int temp=arr[start];
            arr[start]=arr[end];
            arr[end]=temp;
        }
    }
    int temp=arr[low];
    arr[low]=arr[end];
    arr[end]=temp;
    return end;
}
void quicksort(int arr[], int low, int high) {
    
    if (low<high) {
        int loc = partition(arr,low,high);
        quicksort(arr,low,loc - 1);
        quicksort(arr,loc+1,high);
    }
}

void merge(int arr[], int low, int mid, int high) {
    int i=low, j=mid+1,k=low;
    int Sortarr[50];
    while (i<=mid && j<=high) {
        if (arr[i]<=arr[j]) {
            Sortarr[k]=arr[i];
            i++;
        } 
        else{
            Sortarr[k]=arr[j];
            j++;
        }
        k++;
    }

    while (i <= mid) {
        Sortarr[k] = arr[i];
        i++;
        k++;
    }

    while (j <= high) {
        Sortarr[k] = arr[j];
        j++;
        k++;
    }

    for (k = low; k <= high; k++) {
        arr[k] = Sortarr[k];
    }
}

void mergesort(int arr[], int low, int high) {
    if (low<high) {
        int mid=(high+low)/2;
        mergesort(arr,low,mid);
        mergesort(arr,mid+1,high);
        merge(arr,low,mid,high);
    }
}

int main() {
    int n,i,choice;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    int arr[50], orig[50];
    for(i=0;i<n;i++){
        printf("Enter the %d element:",i+1);
        scanf("%d",&orig[i]);
    }

    while(1){
        for (i=0;i<n;i++) {
            arr[i]=orig[i];
        }
        printf("Choose the Option:\n1.Quick Sort\n2.Merge Sort\n3.Exit\nEnter Your Choice: ");
        scanf("%d", &choice);
        clock_t start, end;
        double time_taken;
        switch(choice){
        case 1:
            start=clock();
            quicksort(arr,0,n-1);
            end=clock();
            printf("The Sorted Array is:");
            for(i=0;i<n;i++) {
                printf("%d ",arr[i]);
            }
            time_taken = ((double)(end - start)) / CLOCKS_PER_SEC;
            printf("\nSorting completed in: %f seconds\n", time_taken);
    
            break;
        case 2:
            start=clock();
            mergesort(arr,0,n-1);
            end=clock();
            printf("The Sorted Array is:");
            for(i=0;i<n;i++) {
                printf("%d ",arr[i]);
            }
            time_taken = ((double)(end - start)) / CLOCKS_PER_SEC;
            printf("\nSorting completed in: %f seconds\n", time_taken);
            break;
        case 3:
            printf("Exited");exit(1);
        default:
            printf("Enter Valid Choice\n");
        }
    }
    return 0;
}
