#include<stdio.h>
int linearsearch(int arr[],int size,int value);

int main(){
    int n,value;
    printf("Enter your array size\n");
    scanf("%d",&n);
    int arr[n];
    for(int i = 0;i < n;i++){
        printf("Enter your %d element",i+1);
        scanf("%d",&arr[i]);
    }
    printf("Enter element to be find\n");
    scanf("%d",&value);

    int index = linearsearch(arr,n,value);
    if(index == -1){
        printf("Element not found\n");
    }
    else{
        printf("Element found at index %d\n",index);
    }
    return 0;
}

int linearsearch(int arr[],int size,int value){
    if(size <= 0){
        printf("invalid array\n");
        return -1;
    }
    else{
        for(int i = 0;i < size;i++){
            if(arr[i] == value) return i;
        }
        return -1;
    }

}