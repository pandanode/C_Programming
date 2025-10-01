#include <stdio.h>
void printname(char arr[]);
int main(){
    char str[100];
    char ch;
    int i = 0;

    while(ch != '\n'){
        scanf("%c",&ch);
        str[i] = ch;
        i++;
    }
    str[i] ='\0';
    puts(str);

    return 0;
}
void printstring(char arr[]){
    for(int i =0; arr[i] != '\0';i++){
        printf("%c",arr[i]);
    }
    printf("\n");
}