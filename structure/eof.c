#include <stdio.h>

int main(){

    FILE *fptr;
    fptr = fopen("text.txt","r");//consent

    char ch;//dammy character
    ch = fgetc(fptr); // reading the first charater and aaplying the loop
    while(ch !=EOF){
        printf("%c", ch);
        ch = fgetc(fptr);//reading the charater
    }
    printf("\n");

    fclose(fptr);//consent

    return 0;

} 