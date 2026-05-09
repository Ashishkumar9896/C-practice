#include <stdio.h>
struct Employee{
    char name[20];
    double current_salary;
    int hours;
};
int main(){
    struct Employee e,*ePtr;
    ePtr=&e;
    scanf("%s",ePtr->name);
    scanf("%lf",&ePtr->current_salary);
    scanf("%d",&ePtr->hours);
    
    double increase=0.0;
    if((*ePtr).hours>=12){
        increase+=150.00;
    }
    else if ((*ePtr).hours>=10){
        increase+=100.00;
    }
    else if ((*ePtr).hours>=8){
        increase+=50.00;
    }
    ePtr->current_salary+=increase;
    double total_salary=(ePtr->current_salary)*30;
    printf("Final Salary is: %.2lf\n",ePtr->current_salary);
    printf("Total Salary for 30 days is: %.2lf\n",total_salary);
    return 0;   
}