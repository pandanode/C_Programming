#include <stdio.h>
int main(){
    FILE *fptr;
    fptr = fopen("textfile.txt","r");
    // if(fptr == NULL){
    //     printf("file doest exit");
    // }else{
    //     fclose(fptr);
    // }
    int ch;
    printf("the charater is : %c\n",ch);
    fclose(fptr);


    return 0;
}