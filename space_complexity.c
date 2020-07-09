
#include<stdio.h>

int main(){

    //exampleOne();
    //exampleTwo();
    matrixSum();

    return 0 ;

}

//O(1) time complexity:
//O(1) space complexity:
int exampleOne(){
    int n;
    scanf("%d", &n);

    if(n % 2 ==0){
        printf("%d is even numver.\n", n);
    }else{
        printf("%d is odd number. \n", n);
    }

    return 0;

}


//O(n) space complexity:
int exampleTwo(){
    int i, n, even[101];

    for(i = 0; i < 101; i++){
        even[i] = 0;
    }

    for(i = 0; i < 101; i +=2){
        even[i] = 1;
    }

    scanf("%d", &n);

    if(even[n]){
        printf("%d is even numver.\n", n);
    }else{
        printf("%d is odd number. \n", n);
    }

    return 0;

}



//O(n^2) space Complexity:
int matrixSum(){

    int row, column, matrixOne, matrixTwo;

    int m1[10][10], m2[10][10], sum[10][10];

    printf("Please enter the number of rows of matrix\n");

    scanf("%d", &row);

    printf("Please enter number of columns of matrix \n");

    scanf("%d", &column);

    printf("Please enter the elements of first matrix one by one \n");



    for ( matrixOne = 0 ; matrixOne < row ; matrixOne++ )

    {
        for ( matrixTwo = 0 ; matrixTwo < column ; matrixTwo++ )
        {
            scanf("%d", &m1[matrixOne][matrixTwo]);

            //printf("%d", row);
        }
    }


    printf("Please enter the elements of second matrix one by one \n");


    for ( matrixOne = 0 ; matrixOne < row ; matrixOne++ )
    {
        for ( matrixTwo = 0 ; matrixTwo < column ; matrixTwo++ )
        {
            scanf("%d", &m2[matrixOne][matrixTwo]);
        }
    }


    for ( matrixOne = 0; matrixOne < row; matrixOne++ )
    {
        for ( matrixTwo = 0 ; matrixTwo < column ; matrixTwo++ )
        {
            sum[matrixOne][matrixTwo] = m1[matrixOne][matrixTwo] + m2[matrixOne][matrixTwo];
        }
    }


    printf("The sum of entered matrices is below:\n");



    for ( matrixOne = 0 ; matrixOne < row ; matrixOne++ )
    {
        for ( matrixTwo = 0 ; matrixTwo < column ; matrixTwo++ ){
            printf("%d\t", sum[matrixOne][matrixTwo]);

        }
        printf("\n");




    }

    return 0;


}
