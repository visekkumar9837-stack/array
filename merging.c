#include<stdio.h>
void merging(int arr1[],int arr2[],int capacity_arr1,int *size_arr1,int *size_arr2);

int main(){
    int arr1[50] = {12,45,32,56,43,13,56,43,24,33};
    int arr2[] = {-986,46,876,-6544,78865,344,654,34};
    int size1 = 10, size2 = 8;
    merging(arr1,arr2,50,&size1,&size2);
    return 0;
}

void merging(int arr1[],int arr2[],int capacity_arr1,int *size_arr1,int *size_arr2){
    if(*size_arr1 + *size_arr2 > capacity_arr1){
        printf("array 2 size excedding limit\n");
    }
    else{
        for(int i = 0;i < *size_arr2;i++){
            arr1[*size_arr1 + i] = arr2[i];
        }
        *size_arr1 += *size_arr2;
        printf("successfull\n");
    }
}
