//USING ELSE CONDITION printing uppercase letters
#include <Stdio.h>
int main()
{
    char ch;
    printf("Enter the character:");
    scanf("%c", &ch);
    if(ch >= 'A' && ch <= 'Z') {
        printf("The character is already in uppercase: %c\n", ch);
    } else if (ch >= 'a' && ch <= 'z') {
        printf("The uppercase of the charcter is :%c\n", ch);
    } else {
        printf("The character is not a letter.\n");
    }


}