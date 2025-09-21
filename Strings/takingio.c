#include <stdio.h>
#include <string.h>
int main(){
    char str[40];
    //scanf("%s",str);
    gets(str);
    printf("your input is: %s",str);//only the  first word will print

    return 0;
}