#include <stdio.h>
#include <stdlib.h>

void descendingSort(int [], int);
int maxIndex(int [], int);

int main()
{
    int size;

    printf("Enter the size of the array: \t");
    scanf("%d", &size);
    
    int arr[size];

    printf("Enter the elements of the array: \n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    descendingSort(arr, size);
    printf("Sorted Array in descending order: \n");
    for(int i = 0; i<  size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    int max_index = maxIndex(arr, size);
    printf("Index of the largest element: %d.\n", max_index);

    return 0;
}

void descendingSort(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size - 1; j++) {
            if (arr[j] < arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int maxIndex(int arr[], int size) {
    int max_index = 0;
    for(int i = 0; i < size; i++) {
        if (arr[i] > arr[max_index]) {
            max_index = i;
        }
    }
    return max_index;
}
