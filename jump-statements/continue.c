/* Continue : skips the current iteration of the loop and jumps to the next iteration */
#include<stdio.h>
int main(){
    for(int i=0;i<10;i++){
        if(i==5){
            continue;
        }
        printf("%d ",i);
    }
    return 0;
}