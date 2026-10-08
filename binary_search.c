#include<stdio.h>
int binarysearch(int arr[],int ub,int value,int lb);
void bubblesort(int arr[],int size);
int main(){
    int n,value;
    printf("Enter size of array ");
    scanf("%d",&n);
    int arr[n];
    for(int i = 0;i < n;i++){
        printf("Enter %d element of array : ",i+1);
        scanf("%d",&arr[i]);
    }
    for(int i = 0;i < n;i++){
        printf("%d\t",arr[i]);
       
    }
    bubblesort(arr,n);
    printf("\nEnter value to be search : ");
    scanf("%d",&value);
    
    int index = binarysearch(arr,n-1,value,0);
    if(index == -1){
        printf("Element not found\n");
    }
    else{
        printf("Element found at index %d\n",index);
    }
    for(int i = 0;i < n;i++){
        printf("%d\t",arr[i]);
       
    }
    return 0;
}

void bubblesort(int arr[],int size){
    for(int i = 0;i <size-1;i++){
        int swap = 0;
        for(int j = 0;j < size-i-1;j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                swap = 1;
            }
        }
        if(swap == 0)break;
    }
}


int binarysearch(int arr[],int ub,int value,int lb){
    if(lb <= ub){
        int mid = lb + (ub-lb) / 2;
        if(arr[mid] == value){
            return mid;
        }
        else if(arr[mid] > value){
            return binarysearch(arr,mid-1,value,lb);
        }
        else{
            return binarysearch(arr,ub,value,mid+1);
        }
    } 
    else{
        return -1;
    }
}