#include <stdio.h>

int main(){

    FILE *fptr;
    fptr = fopen("textfile.txt","a");//consent

    fprintf(fptr,"%c",'W');
    fclose(fptr);//consent

    return 0;

} 
// fputs('m',fptr); --> change in the file //apple change into mango
//printf("%c\n", fgetc(fptr)); //simply print in the output in the teriminal
//fprintf(fptr."%c", 'm');--> append means add the additional //applemango
