/*Decision statement in C -
they are you used to chanege the direction of th eexecution of the program flow
1. Simple if - execute only if  process condition if true 
sytax:
if(condition)
{
    //code to be executed if condition is true else it will bypass it 
}

2. if else - process one block of code if condition is true otherwise process another block of code
3.if else if ladder - process one block of code among multiple conditions
4. nested if - process condition inside another condition
5. switch case - process one block of code among multiple options based on the value of a variable

We us ethe following operators to form conditions:
1. Relational operators - to compare two values
   a. == equal to
   b. != not equal to
   c. > greater than
   d. < less than
   e. >= greater than or equal to
   f. <= less than or equal to
2. Logical operators - to combine multiple conditions
   a. && logical AND
   b. || logical OR
   c. ! logical NOT
Write a C program to check whether a number is positive


#include <stdio.h>
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num > 0) {
        printf("The number is positive.\n");
    } 
    printf("Program ended.\n");
    return 0;
}*/
// if else example
#include <stdio.h>
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num > 0) {
        printf("The number is positive.\n");
    } else {
        printf("The number is not positive.\n");
    }
    printf("Program ended.\n");
    return 0;
}   
