//Student is pass or fail
#include <stdio.h>
int main()
{
    int marks;
    printf("Enter the marks: ");
    scanf("%d", &marks);

    marks>=30 ? printf("Student is pass\n") : printf("Student is fail\n");
    return 0;

}