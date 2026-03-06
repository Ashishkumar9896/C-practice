#include <stdio.h>
int main(){
    int a,fact=1;
    scanf("%d",&a);
    if (a<1){
        printf("%d",fact);
    }
    else{
        for(int i=a;i>=1;i--){
            fact=fact*i;
            
        }
        printf("%d",fact);
    }

}