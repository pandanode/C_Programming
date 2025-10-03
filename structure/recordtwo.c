#include <stdio.h>
#include <string.h>

typedef struct address {
    int houseno;
    int block;
    char city[100]; 
    char state[100];
} Address;

void printadd(Address a);

int main() {
    Address adds[5];

    for (int i = 0; i < 5; i++) {
        printf("Enter info for person %d:\n", i+1);
        printf("House no: ");
        scanf("%d", &adds[i].houseno);
        printf("Block: ");
        scanf("%d", &adds[i].block);
        printf("City: ");
        scanf("%s", adds[i].city);
        printf("State: ");
        scanf("%s", adds[i].state);
    }

    printf("\n--- Addresses Entered ---\n");
    for (int i = 0; i < 5; i++) {
        printadd(adds[i]);
    }

    return 0;
}

void printadd(Address a) {
    printf("Address: %d, Block %d, %s, %s\n", a.houseno, a.block, a.city, a.state);
}
