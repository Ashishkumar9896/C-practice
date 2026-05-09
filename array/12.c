/* array at specific position */
#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n); //taking input for size of array
    int arr[n+1]; //declaration of array of size n+1
    for (int i=0;i<n;i++){ //loop to take input for elements of array
        scanf("%d",&arr[i]); //taking input for elements of array
    }
    int pos,val;
    scanf("%d %d",&pos,&val); //taking input for position and value to be inserted
    for(int i=n;i>pos;i--){ //loop to shift elements to right from position
        arr[i] = arr[i-1]; //shifting elements to right
    }   
    arr[pos] = val; //inserting value at specific position
    for(int i=0;i<=n;i++){ //loop to access elements of array
        printf("%d ",arr[i]); //printing elements of array
    }
    return 0;
}