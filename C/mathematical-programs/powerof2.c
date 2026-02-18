// to know whether the given number is a power of 2 
#include <stdio.h>
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    // A number is a power of 2 if it is greater than 0 and its binary representation has only one '1'
    if (num > 0 && (num & (num - 1)) == 0) {// num &(bitwise and) (num - 1) will be 0 only if num is a power of 2 
        printf("%d is a power of 2.\n", num);
    } else {
        printf("%d is not a power of 2.\n", num);
    }
    /*using switch case
    switch (num > 0 && (num & (num - 1)) == 0) {
        case 1:
            printf("%d is a power of 2.\n", num);
            break;
        case 0:
            printf("%d is not a power of 2.\n", num);
            break;
    }*/
        return 0;
}