#include <stdio.h>
int main(){
    int age =34;
    int *ptr = &age;

    printf("The address of age is %p\n", &age);
    printf("The address of age is %p\n", ptr);
    printf("The value of age is %d\n", &ptr);
    printf("The value of age is %d\n", *ptr);
}