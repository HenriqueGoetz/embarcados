#include <stdio.h>
#include <stdlib.h>

#define SIZE 10

unsigned long long int factorial(unsigned long long int n) {
   
    if (n == 0) {
        return 1;
    } else {
        return n * factorial(n-1);
    }
}

int main() {
    
    int i = 0; 
    unsigned int number_list[SIZE] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    unsigned long long int result_list[SIZE];

    for(i = 0; i < SIZE; i++) {
        result_list[i] = factorial(number_list[i]);
    }

    for(i = 0; i < SIZE; i++) {
        printf("%llu ", result_list[i]);
    }

    printf("\n");
    
    return 0;
}