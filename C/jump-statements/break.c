/*break: Exit or terminate the loop when condition is true
sytax: loop{
        condition{
            break;
            }
        } */
#include<stdio.h>
int main(){
    for(int i=0;i<10;i++){
        if(i==5){
            break;
        }
        printf("%d ",i);
    }
    return 0;
}
