//Passing array to function
/*
when an array is passed to a function, only the address of the first element is passed.
Passing array inside a function modifies the array elements
Syntax:
datatype function_name(datatype array_name[size])
*/
#include <stdio.h>
void printArray(int arr[], int size) { //function to print elements of array
    for(int i=0; i<size; i++) { //loop to iterate through array elements
        printf("%d ", arr[i]); //print each element followed by a space
    }
    printf("\n"); //print a new line after printing all elements
}
int main() {
    int arr[5] = {1, 2, 3, 4, 5}; //declaration and initialization of an array of size 5
    printArray(arr, 5); //call the function to print the array elements
    return 0;
}