#include <stdio.h>



int main()
{
    
    int arr[] = {1, 2, 3 ,4 , 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18,19,20};
    
    int n = sizeof(arr) / sizeof(arr[0]);
    
    int x = 17;
    
    int result;
    
    
    result = binery_search(arr, n, x);
    
    //printf("%d", result);
    
    if(result == 0)
        printf("your number is not found !");
    else
        printf("Your Number Position is : %d", result);
    
    
    

    return 0;
}



int binery_search(int arr[], int n, int x){
    
    int left, right, mid;
    left = 0;
    right = n - 1;
    
    //printf("%d", n);
    
    
    while(left <= right){
        
        mid = (left + right) / 2;
        
        //printf("%d", x);
        //printf("%d", arr[mid]);
        
        if(arr[mid] == x)
        
            return mid;
        
        if(arr[mid] < x)
        
            left = mid + 1;
            
        else
        
            right = mid - 1;
            
    }
    
    return 0;
    
    
}
