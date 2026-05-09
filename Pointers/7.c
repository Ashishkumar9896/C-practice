#include <stdio.h>
void m(int *a,int *b){
    printf("%d %% %d = %d\n",*a,*b,*a%*b);
}
int main(){
    int x,y;
    printf("Enter two numbers: ");
    scanf("%d %d",&x,&y);
    m(&x,&y);
    return 0;
}