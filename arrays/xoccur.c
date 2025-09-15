//in array of numbers print the number of occurrences of the given number
#include <stdio.h>
int main(){
    int arr[7]= {1,2,3,4,5,6,7};
    int x = 4,count = 0;

    for (int i=0;i<7;i++){
        if(arr[i]==x){
            count++;
        }
    }
     printf("%d is occurs in the array at times %d\n",x,count);

    return 0;

}
// #include <stdio.h>
// int main(){
//     int arr[7]= {1,2,3,4,5,6,7};
//     int x = 4;

//     for (int i=0;i<7;i++){
//         if(arr[i]==x){
//             printf("%d is present in the array at index %d\n",x,i);
//             break;
//         }
//     }
//     return 0;

// }