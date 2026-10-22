//Array operations
#include <stdio.h>

int main() {
    int n, i;
    int arr[100];
    int sum = 0, largest;
    int evenCount = 0, oddCount = 0;
    float average;

    // Read the size of the array
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Read array elements
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Display array elements
    printf("\nArray elements are:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    // Initialize largest with the first element
    largest = arr[0];

    // Calculate sum, largest, even and odd count
    for(i = 0; i < n; i++) {
        sum += arr[i];

        if(arr[i] > largest) {
            largest = arr[i];
        }

        if(arr[i] % 2 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }
    }

    // Calculate average
    average = (float)sum / n;

    // Display results
    printf("\n\nSum = %d", sum);
    printf("\nAverage = %.2f", average);
    printf("\nLargest Element = %d", largest);
    printf("\nEven Count = %d", evenCount);
    printf("\nOdd Count = %d", oddCount);

    return 0;
}