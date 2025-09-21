//program to enter hte day of the weak
#include <stdio.h>
int main()
{
    int day; //for character input, use char day;
    printf("enter the day of the week (1-7):");
    scanf("%d", &day);// for character input, use scanf("%c", &day);
    switch (day){
        case 1://case a INPUT 'a' get output as 'Monday
            printf("Monday\n");
            break;
            case 2:
            printf("Tuesday");
            break;
            case 3:
            printf("Wednesday\n");
            break;
        case 4:
            printf("Thursday\n");
            break;
        case 5:
            printf("Friday\n");
            break;
        case 6:
            printf("Saturday\n");
            break;
        case 7:
            printf("sundat\n");
            break;
            default:
            printf("invalid day\n");
    }
    return 0;
}