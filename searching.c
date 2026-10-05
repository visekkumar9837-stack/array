#include<stdio.h>
int searching(int arr[],int size,int value);

int main(){
    int arr[] = {12,44,554,22,455,32,66,-2,4};
    int a = searching(arr,9,-2);
    if(a == -1){
        printf("element is not present \n");
    }
    else{
        printf("element present at %d index \n",a);
    }
    return 0;
}

int searching(int arr[],int size,int value){
    for(int i = 0;i < size;i++){
        if(arr[i] == value) return i;
    }
    return -1;
}