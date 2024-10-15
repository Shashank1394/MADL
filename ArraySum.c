// Array sum using pointers

#include <stdio.h>

int sumArray(int *array, int size) {
    int sum = 0;
    for(int i = 0; i < size; i++)
        sum += *(array + i);
    return sum;
}

int main() {
    printf("\nEnter the number of array elements: ");
    int n; scanf("%d", &n);

    int array[n];

    printf("Enter %d elements: ", n);
    for(int i = 0; i < n; i++)
        scanf("%d", &array[i]);
    int total = sumArray(array, n);
    printf("The sum of the array elements is: %d\n", total);
    return 0;
}