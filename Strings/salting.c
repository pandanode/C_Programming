#include <stdio.h>
#include <string.h>
void printname(char arr[]);
void salting(char password[]);
int main(){
    char password[100];
    scanf("%s",password);
    salting(password);
    return 0;
}
void salting(char password[]){
    char salt[] ="123";
    char newpass[200];

    strcpy(newpass,password); //newpass ="test"
    strcat(newpass,salt); //newpass ="test" + "123"
    puts(newpass);
}
void printstring(char arr[]){
    for(int i =0; arr[i] != '\0';i++){
        printf("%c",arr[i]);
    }
    printf("\n");
}