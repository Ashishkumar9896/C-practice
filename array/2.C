/*
2D Array: it is array of array. 
[row][column]
int arrat[3][4] ={{1,2,3,4},{5,6,7,8},{9,10,11,12}};//declaration of 2D array of size 3 rows and 4 columns of integer data type
arr[0][0] = 1; //accessing first element of first row
arr[0][1] = 2; //accessing second element of first row
*/
#include <stdio.h>
int main() {
    int arr[2][2]= {{1,2},{3,4}}; //declaration of 2D array of size 2 rows and 2 columns of integer data type
    for(int i=0;i<2;i++){ //outer loop for rows
        for(int j=0;j<2;j++){ //inner loop for columns
            printf("%d ",arr[i][j]); //accessing elements of 2D array
        }
        printf("\n"); //new line after each row
    }
    return 0;
}