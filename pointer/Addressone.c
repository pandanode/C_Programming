#include <stdio.h>
int main(){
int *ptr; //created a pointer variable
int x; //created a integer variable

ptr = &x; //store the address of x in pointer variable ptr
*ptr = 0;

printf("x = %d\n", x);
printf("*ptr = %d\n", *ptr);

*ptr += 5;
printf("x = %d\n", x);
printf("*ptr = %d\n", *ptr);

(*ptr)++;//increment the value of x by 1
        //*ptr = *ptr + 1;
        //x = x + 1;
printf("x = %d\n", x);
printf("*ptr = %d\n", *ptr);


return 0;
}