#include<stdio.h>
void display(int arr[],int size){
    for(int i = 0;i < size;i++){
        printf("%d\t",arr[i]);
    }
    printf("\n");
}
void bubblesort(int arr[],int size);

int main(){
    int n;
    printf("Enter your array size : ");
    scanf("%d",&n);
    int arr[n];
    for(int i = 0;i < n;i++){
        printf("Enter your %d element : ",i+1);
        scanf("%d",&arr[i]);
    }
    display(arr,n);
    bubblesort(arr,n);
    display(arr,n);
    return 0;
}

void bubblesort(int arr[],int size){
    for(int i = 0;i < size-1;i++){
        int swap = 0;
        for(int j = 0;j < size-1-i;j++){
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