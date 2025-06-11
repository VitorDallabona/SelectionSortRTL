#include <stdio.h>

#define SIZE     5    /* Número de elementos do array */

void SelectionSort(char *startAddr, char size, char order) {
    char i, j, extrem;

    for (i = 0; i < size - 1; i++) {
        extrem = i;

        for (j = i + 1; j < size; j++) {
            if ((order && startAddr[j] < startAddr[extrem]) || '''startAddr[j] -> Reg_aux1 ; startAddr[extrem] ->  Reg_sAddr+extrem'''
                (!order && startAddr[j] > startAddr[extrem])) {
                extrem = j;
            }
        }

        if (i != extrem) {
            // Swap usando operador XOR
            startAddr[i] = startAddr[i] ^ startAddr[extrem];
            startAddr[extrem] = startAddr[i] ^ startAddr[extrem];
            startAddr[i] = startAddr[i] ^ startAddr[extrem];
        }
    }
}

int main() {

    char array[SIZE] = {5,3,-1,4,3};
    int i;
    int order = 1;


    for(i=0; i<SIZE; i++)
        printf("%d ",array[i]);
    printf("\n");


    SelectionSort(array, SIZE, order);


    for(i=0; i<SIZE; i++)
          printf("%d ",array[i]);
    printf("\n");


    return 0;
}