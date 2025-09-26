#include <stdio.h>
#include <string.h>
int main(){
    char str []= "storing str in ptr";
    char*ptr =str;//ptr now to str[0]
    int i = 0;
    while (*ptr!= '\0'){
        printf("%c",*ptr);
        ptr++;
        i++;
    }
    return 0;
}
//ptr = stard for address
//*ptr = value/or fetching the address
// char *ptr ="storing charater"
// charater pointer can also be used to store a address of the pointer
// such direct initialisation using ptr result y allocation of character arrays
// and hence,causes undefined behaviour when we try to change the individual charin a read-only memor