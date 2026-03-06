// to find leap year using switch case
#include <stdio.h>  
int main() {  
    int year;  
    printf("Enter a year: ");  
    scanf("%d", &year);  
  
    // A year is a leap year if it is divisible by 4
    // but not divisible by 100, unless it is also divisible by 400
    switch ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {  
        case 1:  
            printf("%d is a leap year.\n", year);  
            break;  
        case 0:  
            printf("%d is not a leap year.\n", year);  
            break;  
    }  
  
    return 0;  
}