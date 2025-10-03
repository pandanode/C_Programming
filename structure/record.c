#include <stdio.h>
#include <string.h>

//user define
struct student{
    char name[100];
    int roll;
    float cgp;
};
// int main{
//     struct student s1;
//     s1.roll = 1220
    
// }
int main(){
    struct student ece[100];
    ece[1].roll =122;
    ece[1].cgp = 9.8;
    strcpy(ece[1].name,"arin");

    printf("name = %s\n",ece[1].name);

    return 0;
}