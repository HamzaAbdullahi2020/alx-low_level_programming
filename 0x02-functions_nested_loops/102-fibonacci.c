#include"main.h"

/**
 * main - Entry point
 *
 * Description: prints the first 50 Fibonacci numbers
 *		starting with 1 and 2 folled by a new line
 *
 * Return: Always 0 (Success)
*/

#include <stdio.h>
int main (void){

void printFibonacci(int n) {
    int fib1 = 1; // First Fibonacci number
    int fib2 = 2; // Second Fibonacci number

    // Print the first two Fibonacci numbers
    printf("%d, %d, ", fib1, fib2);

    // Calculate and print the rest of the Fibonacci numbers
    for (int i = 3; i <= n; i++) {
        int fib3 = fib1 + fib2; // Calculate the next Fibonacci number
        printf("%d", fib3);

        if (i < n) {
            printf(", "); // Print comma and space if not the last number
        }

        fib1 = fib2; // Update fib1 to the next number in the sequence
        fib2 = fib3; // Update fib2 to the next number in the sequence
    }
    printf("\n");
}

int main() {
    int count = 50;
    printFibonacci(count);
    return 0;
}
}
