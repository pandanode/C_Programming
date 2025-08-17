#include <stdio.h>//harder file

void printhello();//tell the complier we made the function or function declaration/prototype

int main(){
    printhello(); //call the function
    printfhello(); //call the function again or as many times as you want
    return 0;

}
 void printhello(){//define the function
    printf("Hello World\n");
 }