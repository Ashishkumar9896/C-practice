/*
array operation
insert at end
*/
#include <stdio.h>
int main() {
    int arr[5] = {1,2,3,4}; //declaration of array of size 5 and initialization of first 4 elements
    arr[4] = 5; //inserting element at end of array
    for(int i=0;i<5;i++){ //loop to access elements of array
        printf("%d ",arr[i]); //printing elements of array
    }
    return 0;
}