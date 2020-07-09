
#include <stdio.h>

//Time Complexity:
int main(){

    int n, result;

    //scanf("%d", &n);

    //result = n * (n + 1) / n;

    //printf("The result is: %d\n", result);

    //exampleTwo();
    //exampleTree();
    exampleFour();
    //exampleFive();

    return 0;

}

//O(n) complexity
int exampleTwo(){

    int i, n, result;

    scanf("%d", &n);

    for (i = 1; i <= n; i++){
        result = result + i;
    }

    printf("the result is: %d\n", result);

    return 0;

}

//O(n^2) complexity
int exampleTree(){

    int i, j, n, count;
    scanf("%d", &n);

    count = 0;
    for (i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            count = count + 1;
        }
    }

    printf("n = %d, count = %d\n", n, count);

    return 0;

}


//O(n^3) complexity
int exampleFour(){
    int i, j, k, n, count;

    scanf("%d", &n);

    count = 0;

    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            for(k = 0; k < n; k++){
                count = count + 1;
            }
        }
    }

    printf("n = %d, count = %d\n", n, count);
    return 0;

}

int exampleFive(){
    int i, j, k, n, count;

    scanf("%d", &n);

    count = 0;

    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            count = count + 1;
        }
    }

    for(k = 0; k < n; k++){
        count = count + 1;
    }

    printf("n = %d, count = %d\n", n, count);
    return 0;

}

