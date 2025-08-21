#include <stdio.h>
#include <math.h>

void printww(int count);

int main(){
    printww(5);
    return 0;
}
void printww(int count){
    if (count ==0){
        return;
    }
    printf("hello world\n");
    printww(count - 1);
}