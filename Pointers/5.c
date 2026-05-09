//Void pointer
#include <stdio.h>

int main(){
    int a=10;
    float b=5.6;
    void *ptr; // declaring a void pointer
    ptr = &a; // void pointer can point to any data type
    printf("Integer value: %d\n",*(int*)ptr); // typecasting void pointer to int pointer
    ptr = &b; // void pointer can point to any data type
    printf("Float value: %.2f\n",*(float*)ptr); // typecasting void pointer to float pointer
    return 0;
}