#include <stdio.h>
void reverse(int arr[], int n) {
    int i = 0;
    int j = n - 1;
    while (i < j) {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }
}
int main(){
    int arr[] = {1,2,3,4,5,6,7};
    reverse(arr,7);
    for(int i=0;i<=6;i++){
        printf("%d\t", arr[i]);
    }
    return 0;
}