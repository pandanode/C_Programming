#include <stdio.h>
void printname(char arr[]);
int main(){
    char str[100];
    fgets(str,100,stdin);//take the input
    puts(str);//gives the output
    return 0;
}
void printstring(char arr[]){
    for(int i =0; arr[i] != '\0';i++){
        printf("%c",arr[i]);
    }
    printf("\n");
}