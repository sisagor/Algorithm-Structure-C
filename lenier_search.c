#include <stdio.h>



int main()
{
    
    int arr[] = {1, 2, 3 ,4 , 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18,19,20};
    
    int n = sizeof(arr) / sizeof(arr[0]);
    
    int x = 5;
    
    int result;
    
    
    result = lenier_search(arr, n, x);
    
    //printf("%d", result);
    
    if(result == 0)
        printf("your number is not found !");
    else
        printf("Your Number Position is : %d", result);
    
    
    

    return 0;
}



int lenier_search(int arr[], int n, int x){
    
    int i;
    

    
    for(i = 0; i < n; i++){
        
        if(arr[i] == x){
            return i;
        }
            
    }
    
    return 0;
    
    
}
