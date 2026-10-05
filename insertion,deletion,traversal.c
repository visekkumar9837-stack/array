#include<stdio.h>
void insert(int arr[],int *size,int capacity,int value,int index);
void deletion(int arr[],int *size,int index);
void traversal(int arr[],int *size);

//main
int main(){
    int arr[10] = {22,43,12,45,33,22,54,33};
    int size = 8;
    insert(arr,&size,10,-1,2);
    deletion(arr,&size,2);
    traversal(arr,&size);

    return 0;
}

//for insertion
void insert(int arr[],int *size,int capacity,int value,int index){
    if(*size >= capacity){
        printf("capacity is full\n");
    }
    if(index > *size || index < 0){
        printf("invalid index\n");
    }
    else{
        for(int i = *size -1;i >= index;i--){
            arr[i+1] = arr[i];
        }
        arr[index] = value;
        (*size)++;
    }
}

//for deletion
void deletion(int arr[],int *size,int index){
    if(index >= *size){
        printf("invalid index\n");
    }
    else{
        for(int i = index;i < *size-1;i++){
            arr[i] = arr[i+1];
        }
        (*size)--;
    }
}

//for traversel
void traversal(int arr[],int *size){
    for(int i = 0;i < *size;i++){
        printf("%d\t",arr[i]);
    }
}