//Diagonal from top right to bottom left
#include <stdio.h>
int main() {
    int arr[3][3]= {{1,2,3},{4,5,6},{7,8,9}}; //declaration of 2D array of size 3 rows and 3 columns of integer data type
    int sum=0; //initialize sum to 0
    for(int i=0;i<3;i++){ //loop for rows
        sum+=arr[i][2-i]; //add elements of diagonal to sum
    }
    printf("Sum of diagonal elements: %d\n",sum); //print sum of diagonal elements
    return 0;
}