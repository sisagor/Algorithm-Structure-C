#include <stdio.h>

int main(){

    int arr[] = {9, 5, 2, 7, 1, 5};

    int n = (sizeof(arr) / sizeof(arr[0]));

    int result;

    result = selection_sort(arr, n);
    //printf("the sort is : %");

    return 0;
}



int selection_sort(int arr[], int n){

    int i, minIndex, maxIndex, temp;

    // {9, 5, 2, 7, 1, 5}

    //printf(" %d\n", n);

    for(i = 0; i < n; i++){
        minIndex = i;

        for(maxIndex = (i + 1); maxIndex < n; maxIndex++){

            //printf("min: %d\t max : %d \n",arr[minIndex], arr[maxIndex] );

            if(arr[maxIndex] < arr[minIndex] ){
                minIndex = maxIndex;

            }

        }

        if(minIndex != i){

            temp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = temp;

        //printf(" %d \t",  arr[maxIndex]);

        }

        printf("%d", arr[i]);

    }

    return 0;

}
