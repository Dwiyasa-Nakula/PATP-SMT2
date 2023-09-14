#include<stdio.h>

void insertionSort(int arr[], int n) {
    int i, j, k, temp, ke = 0;
    for (i = 1; i < n; i++) {
        temp = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > temp) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = temp;
        ke++;
        printf("proses sort ke-%d: \n", ke);
        for(k = 0; k < n; k++){
            printf("%d ", arr[k]);
        }
        printf("\n"); 
    }
}

void printArray(int arr[], int n) {
    int i;
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main(){
int n, arr[n];
    printf("Masukan n array: ");
    scanf("%d",&n);

    printf("Masukan %d bilang interger:\n", n);
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }

    insertionSort(arr, n);

    printf("Arr setelah diurutkan dari kecil:\n");
    printArray(arr, n);

    return 0;
}