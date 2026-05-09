/*  Binary Search: Search given element inside an array by checking middle element and comparision 
    A divide and conqure statergy which search the element recursively
    The array must be sorted in order to apply binary search
    Time Complexity: O(log n)
*/
#include <stdio.h>
int binSearch(int arr[],int n,int target){
    int low=0,high=n-1,mid;
    while(low<=high){
        mid=(low+high)/2;
        if(arr[mid]==target){
            return mid;
        }
        else if(arr[mid]<target){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return -1;
}
int main(){
    int arr[5]={1,2,3,4,5};
    int target;
    scanf("%d",&target);
    int result=binSearch(arr,5,target);
    if(result==-1){
        printf("Element not found");
    }
    else{
        printf("Element found at index %d",result);
    }
    return 0;
}