#include <stdio.h>

void bubbleSort(int arr[], int n) {
    int i, j;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Menukar elemen jika elemen saat ini lebih besar dari elemen berikutnya
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void printArray(int arr[], int n) {
    int i;
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int n, i;
    printf("Masukkan jumlah elemen array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Masukkan elemen-elemen array:");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Array sebelum diurutkan:\n");
    printArray(arr, n);
    
    bubbleSort(arr, n);
    
    printf("Array setelah diurutkan menggunakan Bubble Sort:\n");
    printArray(arr, n);
    
    return 0;
}