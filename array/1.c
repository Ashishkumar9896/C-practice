/* Array 
Collection of related data items of same data type
Static entity:- They remain the same size throughout the program execution 
They are represented by square brackets []*/
#include <stdio.h>
int main() {
    int arr[] = {10,20,30,40,50}; //declaration of an array of size 5 of integer data type 
    //size of array is size of data type * number of elements in the array
    printf("Size of array: %lu bytes\n", sizeof(arr)); //size of array
    printf("Number of elements in array: %lu\n", sizeof(arr)/sizeof(arr[0])); //number of elements in array
    printf("Elements of array: \n");
    printf("First element: %d\n", arr[0]); //accessing first element of array
    printf("Second element: %d\n", arr[1]); //accessing second element of array
    int n=sizeof(arr)/sizeof(arr[0]); //number of elements in array
    float price[]={10.5,20.5,30.5,40.5,50.5}; //declaration of an array of size 5 of float data type
    printf("Size of price array: %lu bytes\n", sizeof(price)); //size of price array
    printf("Prices at index 0: %.1f\n", price[0]); //accessing first element of price array
    printf("Prices at index 1: %.1f\n", price[1]); //accessing second element of price array
return 0;