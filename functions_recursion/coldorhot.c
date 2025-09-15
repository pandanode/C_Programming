//print cold or hot based on temperature
#include <stdio.h>
void coldorhot(int temp);
int main(){
    int temp;
    printf("Enter the temperature:",temp);
    scanf("%d", &temp);
    coldorhot(temp);
    return 0;
}
void coldorhot(int temp){
    if(temp<20){
        printf("temp is cold");
    }
    else{
        printf("temp is hot");
    }
}
