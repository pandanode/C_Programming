#include <stdio.h>
#include <string.h>
int main(){
    char str[15];
    puts("Enter a string");//printf
    scanf("%[^\n]",str);
    // puts("The size of is:");
    //size
    int size = 0;
    int k = 0;
    while (str[size]!='\0'){
        size++;
        k++;
    }
    //printf("%d",size);//for printing the size
    for(int i=0,j=size-1;i<=j;i++,j--){
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }



    puts("the reverse is:"); //automaticall gives '\n'
    puts(str);

    return 0;
}