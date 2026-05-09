// to read multiple words
#include <stdio.h>
int main(){
    char str[100];
    //scanf("%[^\n] %*c",str);
    scanf("%[^\n]s",str);
    printf("%s",str);
    return 0;
    
}