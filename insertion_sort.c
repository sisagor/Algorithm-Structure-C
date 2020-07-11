#include<stdio.h>

int main(){

    int arr[] = {1, 2, 4};

    int n = sizeof(arr) / sizeof(arr[0]);

    insertion_sort(arr, n);

    return 0;

}


void insertion_sort(int arr[], int n){

    int i, j, temp;


    for(i = 0; i < n; i++){

        temp = arr[i];

        //Loop 0
        //temp = 6
        j = i-1;
        //j = -1
        //arr[j] = 0

        //Loop 1;
        //temp = 2
        //j= 0;
        //arr[j] = 6


        while(j >= 0 && arr[j] > temp){

            arr[j+1] = arr[j];
            j = j-1;

        }

        arr[j+1] = temp;

    }

    for(i = 0; i < n; i++)
        printf("%d\t", arr[i]);


    return 0;

}

