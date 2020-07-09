#include<stdio.h>

int main(){

    int arr[] = {9, 6, 4, 3, 2, 1};

    int n = sizeof(arr) / sizeof(arr[0]);

    int result;

    result = buble_sort(arr, n);

    return 0;

}


int buble_sort(int arr[], int n){

    int i, j, temp;

    int count;


    for(i = 0; i < n; i++){

        //if we use (n-i-1) operation will be half:
        for(j = 0; j < n-i-1; j++){
        //if we use (n-1) operation will be double:
        //for(j = 0; j < n-1; j++){
            count = count +1;
            if( arr[j] > arr[j+1] ){

                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;

                //printf("%d\t", temp);

            }


        }


    }

    for(i = 0; i < n; i++)
        printf("%d\t", arr[i]);

    printf("\n number of Operation %d", count);
    return 0;

}

