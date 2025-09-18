#include <stdio.h>
int main(){
    char arr[] ="hello";
    // char arr[]= {'h','e','l','l','o'};//gives error
    char arr[]= {'h','e','l','l','o','/0'};//print hello
    int i = 0;
    while (i<5){
        printf("%c", arr[i]);
        i++;
    }
    return 0;
}