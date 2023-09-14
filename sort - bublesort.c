#include <stdio.h>

void swap(int *xp, int *yp) {
   int temp = *xp;
   *xp = *yp;
   *yp = temp;
}

void bubbleSort(int arr[], int n) {
   int i, j, swapped;        // dioptimasi dengan bool `swapped`:
   for (i = 0; i < n-1; i++) {
      swapped = 0;
      for (j = 0; j < n-i-1; j++) {
         if (arr[j] > arr[j+1]) {
            swap(&arr[j], &arr[j+1]);
            swapped = 1;
         }
      }
      if (swapped == 0)
         break;
   }
}

int main(){
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