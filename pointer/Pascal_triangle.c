//print the pascal triangle
#include <stdio.h>
void pascal(int n);
int main(){
    int number;
    printf("Enter the number of rows: ");
    scanf("%d", &number);
    pascal(number);
    return 0;
}
void pascal(int n){
    int arr[n][n];
    for(int line = 0; line < n; line++){
        for(int space = 0; space < n - line - 1; space++){
            printf(" ");
        }
        for(int i = 0; i <= line; i++){
            if(i == 0 || line == 0){
                arr[line][i] = 1;
            }else{
                arr[line][i] = arr[line - 1][i - 1] + arr[line - 1][i];
            }
            printf("%d ", arr[line][i]);
        }
        printf("\n");
    }
}