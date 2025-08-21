#include <stdio.h>
int sum(int n);

int main(){
    printf("sum is:%d", sum(10));
    printf("\n");
    return 0;
}
int sum(int n) {
    if(n==1){
        return 1;
    }
    int sumnum = sum(n-1);
    int sumn = sumnum + n;
    return sumn;
    }