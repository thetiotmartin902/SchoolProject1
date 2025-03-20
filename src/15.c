// This is a sample C program.
// It demonstrates how to use printf and scanf functions.
#include <stdio.h>

int main() {
    int x = 5;
    float y = 3.14;

    // Print the value of x using printf
    printf("The value of x: %d\n", x);

    // Use scanf for input
    scanf("%f", &y);

    // Print the value of y using printf
    printf("The value of y: %.2f\n", y);

    return 0;
}
