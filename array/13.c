/* Deletion : Removing an element from the array Reduces */
#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n); //taking input for size of array
    int arr[n]; //declaration of array of size n
    for (int i=0;i<n;i++){ //loop to take input for elements of array
        scanf("%d",&arr[i]); //taking input for elements of array
    }
    int pos;
    scanf("%d",&pos); //taking input for position to be deleted
    for(int i=pos;i<n-1;i++){ //loop to shift elements to left from position
        arr[i] = arr[i+1]; //shifting elements to left
    }   
    n--; //reducing size of array after deletion
    for(int i=0;i<n;i++){ //loop to access elements of array
        printf("%d ",arr[i]); //printing elements of array
    }
    return 0;
}
