#include <stdio.h>

int main() {
    int i;
    int arr[5];

    // Fill the array with random integers between 1 and 100

    for (i = 0; i < 5; i++) {
        arr[i] = rand() % 100 + 1;
    }

    // Print the array
    printf("Random array: \n");
    for (i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
