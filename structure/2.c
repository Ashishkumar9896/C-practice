/*
    Union in C
    A union is a user-defined data type in C that allows you to store different types of data in the same memory location.
     It is similar to a structure, but in a union, all members share the same memory.
      The syntax for defining a union is as follows:
    union union_name {
        member1; int a;
        member2; char b;
        4+1!=5 is not the size of the union, it is the size of the largest member.
         In this case, the size of the union will be 4 bytes (the size of an int).
        

*/
#include <stdio.h>
union data{
    int a;
    char b;
};
int main(){
    union data d; // declaring a union variable
    d.a=10;// assigning a value to the int member of the union
    printf("it will print the value of d.a=%d\n ",d.a);// this will print the value of d.a, which is 10
    d.b='A';// assigning a value to the char member of the union
    printf("it will print the garbage value of d.a=%d\n",d.a);// this will print the value of d.a, but since d.b is assigned after d.a, it will overwrite the value of d.a, so it will print a garbage value.
    printf("d.b=%c\n",d.b);// this will print the value of d.b, which is 'A'
    return 0;
}