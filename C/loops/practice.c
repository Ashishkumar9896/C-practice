//To reverse a number using while loop and skip zeroes completely
#include <Stdio.h>
int main(){
   int i;
   printf("Enter a number: ");
   scanf("%d",&i);
    int rev=0;
    while(i>0){
        int rem=i%10;
        if(rem != 0){  // Skip zeros during reversal
            rev=rev*10+rem;
        }
        i=i/10;
    }
    printf("Reversed number: %d", rev);
    return 0;
}