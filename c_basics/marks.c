// To calculate the average of marks in C, we can use an array to store the marks of three studentand then compute the average.
#include <stdio.h>
void main()
{
    char name[3];
    int marks[3];
    int rollno [3];
    int i, s= 0, average;
    printf("Enter the marks of the students:\n");
    for(i =0;i <=3,i++)
    {        
        scanf( "%c %d %d ", & name [i], & rollno[i], & marks [i]);
        s = s + marks[i];
    }
    average = s /3;
    printf  ("The average marks of    studentis :%d\n", average);

}