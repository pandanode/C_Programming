#include <stdio.h>

void namaste();
void bonjour();

int main(){
    printf("enter i fro indian and f for franch");
    int ch;
    scanf("%d", &ch);
    if(ch == 'i'){
        namaste();
    }
    else{
        bonjour();
    }
    return 0;
}
void namaste(){
    printf("Namaste\n");
}
void bonjour(){
    printf("Bonjour\n");
}