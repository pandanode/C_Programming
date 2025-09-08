#include <stdio.h>

void printnumber(int arr[], int size);


int main(){
    int arr[]= {1,2,3,4,5};
    printnumber(arr,4);

    return 0;
}
void printnumber(int arr[], int size){
    for ( int i=0; i<=size; i++){
        printf("%d\t", arr[i]);
    }
    printf("\n");
}  