#include<stdio.h>
void mergesort(int arr[],int lb,int ub);
void merge(int arr[],int lb,int mid,int ub);
void print(int arr[],int size);
int main(){
    int size;
    printf("Enter the size of your array : ");
    scanf("%d",&size);
    int arr[size];
    for(int i = 0;i < size;i++){
        printf("Enter your %d element : ",i+1);
        scanf("%d",&arr[i]);
    }
    print(arr,size);
    mergesort(arr,0,size-1);
    print(arr,size);

    return 0;
}

void mergesort(int arr[],int lb,int ub){
    if(lb < ub){
        int mid = lb + (ub - lb) / 2;
        mergesort(arr,lb,mid);
        mergesort(arr,mid+1,ub);
        merge(arr,lb,mid,ub);
    }
}

void merge(int arr[],int lb,int mid,int ub){
    int n1 = (mid - lb) +1;
    int n2 = ub - mid;
    int arr1[n1];
    int arr2[n2];
    for(int i = 0;i < n1;i++){
        arr1[i] = arr[lb+i];
    }
    for(int j = 0;j < n2;j++){
        arr2[j] = arr[mid+j+1];
    }
    int i = 0,j = 0;
    int k = lb;
    while(i < n1 && j < n2){
        if(arr1[i] <= arr2[j]){
            arr[k] = arr1[i];
            i++;
        }
        else{
            arr[k] = arr2[j];
            j++;
        }
        k++;
    }
    while(i < n1){
        arr[k] = arr1[i];
        i++;
        k++;
    }
    while(j < n2){
        arr[k] = arr2[j];
        j++;
        k++;
    }
}

void print(int arr[],int size){
    if(size == 0){
        printf("array is empty");
    }
    else{
        for(int i = 0;i < size;i++){
            printf("%d\t",arr[i]);
        }
    }
    printf("\n");
}