//comparion and the diffference
#include <stdio.h>
int main(){
    int arr = 12;
    int arr2 = 10;
    int *ptr = &arr;
    int *ptr2 = &arr2;
    printf("%u %u difference %d\n",ptr,ptr, ptr-ptr2);
    ptr2 = &arr;
    printf("comparsion: %d\n", ptr==ptr2);
    return 0;
}