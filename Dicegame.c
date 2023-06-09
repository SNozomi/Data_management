#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int dice_1, dice_2, total;

    srand((unsigned int)time(NULL));

    printf("Rolling dice...\n");
    dice_1 = rand() % 6 + 1;
    dice_2 = rand() % 6 + 1;
    total = dice_1 + dice_2;
    
    printf("Die 1: %d\n", dice_1);
    printf("Die 2: %d\n", dice_2);
    printf("Total value: %d\n", total);

    return 0;
}