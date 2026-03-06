// Switch case 
// Program to display the day of the week based on user input (1-7)
#include <stdio.h>
int main(){
    int day;
    printf("Enter a number (1-7) to get the day: ");
    scanf("%d",&day);
    // here we use switch statement so our code became easeier to read to understand
    /*we use sytax-
                    switch(n){ // here user will enter any value of n and in case it will verify 
                    case 1:
                    printf(any statement)
                    break;
                    default: it will execute by default  if any case will not match  
                    } 
    
    */
   switch(day){
    case 1:
    printf("It is monday\n");
    break;
    case 2:
    printf("It is tuesday\n");   
    break;
    case 3:
    printf("It is wednesday\n");
    break;
    case 4:
    printf("It is thursday\n");
    break;
    case 5: 
    printf("It is friday\n");
    break;
    case 6:
    printf("It is saturday\n");
    break;
    case 7:
    printf("It is sunday\n");
    break;
    default:
    printf("Invalid input! Please enter 1-7.\n");
   }
   printf("Program completed.\n");
    return 0;
}