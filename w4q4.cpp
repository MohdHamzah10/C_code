
#include <stdio.h>

#define MAX 100 // Define the maximum size of the array

int main() {
    int n, i;
    int array[MAX];
    int largest;

    // Ask the user for the number of elements
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    // Ensure the number of elements does not exceed the maximum size
    if (n > MAX) {
        printf("Error: Number of elements exceeds maximum allowed (%d).\n", MAX);
        return 1;
    }

    // Input elements into the array
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    // Initialize the largest element with the first element
    largest = array[0];

    // Find the largest element in the array
    for (i = 1; i < n; i++) {
        if (array[i] > largest) {
            largest = array[i];
        }
    }

    // Output the result
    printf("Largest element in the array: %d\n", largest);

    return 0;
}

