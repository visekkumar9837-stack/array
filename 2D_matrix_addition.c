#include<stdio.h>
#include<stdlib.h>
int (* addition(int arr1[][3],int arr2[][3],int row_arr1,int coloum_arr1,int row_arr2,int coloum_arr2))[3];

int main(){
    int arr1[2][3] = {23,45,33,22,45,33};
    int arr2[2][3] = {78,43,78,54,23,65};
    int (*result)[3] = addition(arr1,arr2,2,3,2,3);

    return 0;
}

int (* addition(int arr1[][3],int arr2[][3],int row_arr1,int coloum_arr1,int row_arr2,int coloum_arr2))[3]{
    if(row_arr1 == row_arr2 && coloum_arr1 == coloum_arr2){
        int (*add_arr)[3] = malloc(row_arr1 * sizeof(*add_arr));
        for(int i = 0;i < row_arr1;i++){
            for(int j = 0;j < coloum_arr1;j++){
                add_arr[i][j] = arr1[i][j] + arr2[i][j];
            }
        }
        return add_arr;
    }
    else{
        printf("orders of matrixs are not equall\n");
        return NULL;
    }
}