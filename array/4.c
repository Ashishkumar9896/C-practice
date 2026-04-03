//Sum of diagonal elements of 2D array
#include <stdio.h>
int main() {
    int arr[3][3]= {{1,2,3},{4,5,6},{7,8,9}}; //declaration of 2D array of size 3 rows and 3 columns of integer data type
    int sum=0; //initialize sum to 0
    for(int i=0;i<3;i++){ //loop for rows
        sum+=arr[i][i]; //add elements of diagonal to sum
    }
    printf("Sum of diagonal elements: %d\n",sum); //print sum of diagonal elements
    return 0;
}
//Diagonal elements of a 2D array are the elements that are located on the diagonal line that runs from the top-left corner to the bottom-right corner of the array. In a 3x3 array, the diagonal elements are arr[0][0], arr[1][1], and arr[2][2]. The code above calculates the sum of these diagonal elements and prints the result.
