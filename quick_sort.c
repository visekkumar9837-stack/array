#include<stdio.h>
void quicksort(int arr[],int lb,int ub);
int partition(int arr[],int lb,int ub);
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
    quicksort(arr,0,size-1);
    print(arr,size);

    return 0;
}

void quicksort(int arr[],int lb,int ub){
    if(lb < ub){
        int index = partition(arr,lb,ub);
        quicksort(arr,lb,index - 1);
        quicksort(arr,index+1,ub);
    }
}

int partition(int arr[],int lb,int ub){
    int pvoit = arr[lb];
    int start = lb+1;
    int end = ub;
    while(start < end){
        while(arr[start] <= pvoit){
            start++;
        }
        while(arr[end] > pvoit){
            end--;
        }
        if(start < end){
            int temp = arr[start];
            arr[start] = arr[end];
            arr[end] = temp;
        }
    }
    arr[lb] = arr[end];
    arr[end] = pvoit;
    return end;
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