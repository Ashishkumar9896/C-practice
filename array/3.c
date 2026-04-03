//Row sum
#include <stdio.h>
int main() {
    int arr[2][2]= {{1,2},{3,4}}; //declaration of 2D array of size 2 rows and 2 columns of integer data type
    for(int i=0;i<2;i++){ //outer loop for rows
        int sum=0; //initialize sum to 0 for each row
        for(int j=0;j<2;j++){ //inner loop for columns
            sum+=arr[i][j]; //add elements of each row to sum
        }
        printf("Sum of row %d: %d\n",i,sum); //print sum of each row
    }
    return 0;
}