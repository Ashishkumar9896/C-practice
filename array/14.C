//Searching: To locate an item of interest
/*
Linear search:  Search given element inside an array by checking individual and comparision

*/
#include <stdio.h>
int main(){
    int arr[5] = {1,2,3,4,5};
    int search;
    scanf("%d",&search);    
    for(int i=0;i<search;i++){
        if(arr[i] == search){
            printf("Element found at index %d",i);
            return 0;
        }
    }
    printf("Element not found");
    return -1;
}   