#include <stdio.h>
int main() {
int m,n;
scanf("%d",&m);
scanf("%d",&n);
int result=(++m)*(--n);
printf("%d\n",result);
return 0;
}