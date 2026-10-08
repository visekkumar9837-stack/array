#include<stdio.h>
void display(int arr[],int size){
    for(int i = 0;i < size;i++){
        printf("%d\t",arr[i]);
    }
    printf("\n");
}
void insertionsort(int arr[],int size);

int main(){
    int size;
    printf("Enter your array size : ");
    scanf("%d",&size);
    int arr[size];
    for(int i = 0;i < size;i++){
        printf("Enter your %d element : ",i+1);
        scanf("%d",&arr[i]);
    }
    display(arr,size);
    insertionsort(arr,size);
    display(arr,size);
    return 0;
}

void insertionsort(int arr[],int size){
    int i = 1;
    while(i < size){
        int key = arr[i];
        int j = i - 1;
        while(j >= 0 && arr[j] > key){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
        i++;
    }
}