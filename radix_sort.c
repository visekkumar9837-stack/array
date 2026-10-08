#include<stdio.h>
void radix_sort(int arr[],int size);
void sort(int arr[],int pos,int size);
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
    radixsort(arr,size);
    print(arr,size);

    return 0;
}

void radix_sort(int arr[],int size){
    int max_value;
    for(int i = 0;i < size;i++){
        if(arr[i] > max_value)max_value = arr[i];
    }
    for(int pos = 1;(max_value/pos) > 0;pos *= 10){
        sort(arr,pos,size);
    }
}

void sort(int arr[],int pos,int size){
    int count[10] = {0,0,0,0,0,0,0,0,0,0};
    for(int i = 0;i < size;i++){
        ++count[(arr[i]/pos) % 10];
    }
    for(int i = 1;i < 10;i++){
        count[i] += count[i-1];
    }
    int B[size];
    for(int j = size-1;j >= 0;j--){
        B[--count[(arr[j]/pos) % 10]] = arr[j];
    }
    for(int k = 0;k < size;k++){
        arr[k] = B[k];
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