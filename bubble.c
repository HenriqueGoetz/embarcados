#include <stdio.h>
#define SIZE 10

void bubblesort(int numberOfItems, int numbers[]) {

    int i, j, aux, smallIndex;
    for(i = 0; i < numberOfItems-1; i++) {
        for(j = i; j < numberOfItems; j++) {
            if(j == i) {
                aux = numbers[j];
                smallIndex = j;
            } else if(aux > numbers[j]) {
                aux = numbers[j];
                smallIndex = j;
            }
        }

        aux = numbers[i];
        numbers[i] = numbers[smallIndex];
        numbers[smallIndex] = aux;
    }
}


int main() {

    int i, numbers[SIZE] = {3, 1, 4, 5, 2, 6, 9, 7, 8, 0};
        
    bubblesort(SIZE, numbers);
    
    printf("\n");
    for(i = 0; i < SIZE; i++) {
        printf("  %d", numbers[i]);
    }
    printf("\n\n");
    
    return 0;
}