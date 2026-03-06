//Goto statement in C
#include<stdio.h>
int main(){
    int i;
    printf("Enter a number: ");
    scanf("%d",&i);
    if(i%2==0){
        goto even;
    }
    else{
        goto odd;
    }
even:
    printf("Even number");
    goto end;
odd:
    printf("Odd number");
end:
    return 0;
}