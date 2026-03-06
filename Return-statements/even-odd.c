//To return even or odd number using return statement in C
#include<stdio.h>
int even_odd(int num){
    if(num%2==0){
        return 1;//return 1 for even number
    }
    else{
        return 0;//return 0 for odd number
    }
}int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    if(even_odd(num)){
        printf("Even number");
    }
    else{
        printf("Odd number");
    }
    return 0;
}