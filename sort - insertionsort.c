#include <stdio.h>
#include <string.h>

void insertionSort(char arr[][100], int n) {
    int i, j;
    char key[100];
    for (i = 1; i < n; i++) {
        strcpy(key, arr[i]);
        j = i - 1;

        while (j >= 0 && strcmp(arr[j], key) > 0) {
            strcpy(arr[j + 1], arr[j]);
            j = j - 1;
        }
        strcpy(arr[j + 1], key);
    }
}

void printArray(char arr[][100], int n) {
    int i;
    for (i = 0; i < n; i++) {
        printf("%s ", arr[i]);
    }
}

int main() {
    int n, i;
    printf("Masukkan jumlah elemen array: ");
    scanf("%d", &n);

    char arr[n][100];
    printf("Masukkan elemen-elemen array: ");
    for (i = 0; i < n; i++) {
        scanf("%s", arr[i]);
    }

    insertionSort(arr, n);
    
    printf("Array setelah diurutkan menggunakan Insertion Sort: ");
    printArray(arr, n);
    
    return 0;
}