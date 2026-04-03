/*
        2D Array
    A 2D array is an array of arrays. It is a collection of elements arranged
in rows and columns. The syntax for declaring a 2D array is as follows:
    datatype array_name[row_size][column_size];
    For example, to declare a 2D array of integers with 3 rows and 4 columns, we can use the following code:
    int arr[3][4];
*/
//TO find traspose of a matrix
#include <stdio.h>
void transpose(int aee[3][3], int row, int col) { //function to find the transpose of a matrix
    int trans[3][3]; //declare a 2D array to store the transpose of the matrix
    for(int i=0; i<row; i++) { //loop to iterate through the rows of the matrix
        for(int j=0; j<col; j++) { //loop to iterate through the columns of the matrix
            trans[j][i] = aee[i][j]; //assign the value of the original matrix to the transpose matrix
        }
    }
    printf("Transpose of the matrix:\n"); //print the transpose of the matrix
    for(int i=0; i<col; i++) { //loop to iterate through the rows of the transpose matrix
        for(int j=0; j<row; j++) { //loop to iterate through the columns of the transpose matrix
            printf("%d ", trans[i][j]); //print each element of the transpose matrix followed by a space
        }
        printf("\n"); //print a new line after each row of the transpose matrix
    }
}
int main() {
    int aee[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}}; //declare and initialize a 2D array
    int row = sizeof(aee) / sizeof(aee[0]); //calculate the number of rows in the matrix
    int col = sizeof(aee[0]) / sizeof(aee[0][0]); //calculate the number of columns in the matrix
    transpose(aee, row, col); //call the function to find the transpose of the matrix
    return 0;
}
