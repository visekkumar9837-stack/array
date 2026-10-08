#include<stdio.h>
void selectionsort(int arr[],int size);
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
    selectionsort(arr,size);
    print(arr,size);

    return 0;
}

void selectionsort(int arr[],int size){
    for(int i = 0;i < size-1;i++){
        int min_index = i;
        for(int j = i+1;j < size;j++){
            if(arr[j] < arr[min_index]){
                min_index = j;
            }
        }
        if(min_index != i){
            int temp = arr[i];
            arr[i] = arr[min_index];
            arr[min_index] = temp;
        }
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