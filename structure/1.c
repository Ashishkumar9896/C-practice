//Structure in C
// A structure is a user-defined data type in C that allows you to combine different types of data into a single unit. 
// It is used to group related variables together. The syntax for defining a structure is as follows:
#include <stdio.h>
struct student{
    char name[20];
    int age;
    float marks;
};
int main(){
    struct student s1={"John",20,85.5};
    printf("Name: %s\n",s1.name);
    printf("Age: %d\n",s1.age);
    printf("Marks: %.2f\n",s1.marks);
    return 0;
}