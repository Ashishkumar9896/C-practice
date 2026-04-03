//Array elements are passed as reference inside the functions.
/*
Array elements get modified inside thr function
syntax: datatype function_name(datatype array_name[],size of the array)
        void printArray(int arr[])

Array are passed in 3 ways:
1. Pass by value: In this method, a copy of the array is passed to the function. Any changes made to the array inside the function do not affect the original array outside the function.
2. Pass by reference: In this method, the address of the array is passed to the
function. Any changes made to the array inside the function will affect the original array outside the function.
3. Pass by pointer: In this method, a pointer to the array is passed to thefunction. This is similar to pass by reference, but it allows for more flexibility in terms of memory management and can be used to pass arrays of different sizes.
    ARRAY INSIDE THE FUNCTION
    When an array is passed to a function, it is treated as a pointer to the first element of the array. This means that any changes made to the array inside the function will affect the original array outside the function. The size of the array is not passed to the function, so it is important to ensure that the function does not access elements outside the bounds of the array.
    SYNTAX:
    void function_name(datatype array_name[], size of the array) {
        // function body
    }
    EXAMPLE:
    #include <stdio.h>
void printArray(int arr[], int size) { //function to print the elements of the array
    for(int i=0; i<size; i++) { //loop to iterate through array elements
        printf("%d ", arr[i]); //print each element followed by a space
    }
}
int main(){
    int n=5;
    int arr[]={3,5,6,2,7}; //declaration and initialization of an array of size 5
    printArray(arr, n); //call the function to print the elements of the array
    return 0;
    */
#include <stdio.h>
void printArray(int arr[], int size) { //function to print the elements of the array
    for(int i=0; i<size; i++) { //loop to iterate through array elements
        printf("%d ", arr[i]); //print each element followed by a space
    }
}
int main(){
    int n=5;
    int arr[]={3,5,6,2,7}; //declaration and initialization of an array of size 5
    printArray(arr, n); //call the function to print the elements of the array
    return 0;
}

