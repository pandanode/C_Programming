//check number is prime or nto
#include <stdio.h>
int main()
{
    int no,i,flag=0;
    printf("Enter the number:");
    scanf("%d",&no);
    if(no<=1){
        printf("%d is not the prime number.\n",no);
        return 0;
    }
    for(i=2;i<=no/2;++i){
        if(no % i ==0){
            flag = 1;
            break;
        }
    }
    if(flag == 0)
        printf("%d is a prime number.\n", no);
    else
        printf("%d is not a prime number.\n", no);
}