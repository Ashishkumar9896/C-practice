/*
Sorting: Technique of arranging items at their right position
Bubble Sort: Repeatedly swapping adjacent elements if they are in wrong order
Time Complexity: O(n^2)
*/
#include <stdio.h>
void bubbleSort(int arr[],int n){
    int temp;
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}
int main(){
    int arr[5]={5,4,3,2,1};
    bubbleSort(arr,5);
    for(int i=0;i<5;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}   