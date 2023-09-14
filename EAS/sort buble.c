#include <stdio.h>

void printIteration(int arr[], int n, int iteration) {
    printf("Iterasi ke-%d: ", iteration);
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void bubbleSort(int arr[], int n) {
    int swapped;
    for (int i = 0; i < n - 1; i++) {
        swapped = 0;
        printIteration(arr, n, i + 1);

        for (int j = 0; j < n - 1 - i; j++) { 
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = 1;
            }
        }

        if (!swapped) {
            break; 
        }
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int n;

    printf("Masukkan ukuran array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Masukkan deret bilangan integer: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Deret bilangan sebelum diurutkan:\n");
    printArray(arr, n);

    bubbleSort(arr, n);

    printf("Deret bilangan setelah diurutkan menggunakan Bubble Sort:\n");
    printArray(arr, n);

    return 0;
}