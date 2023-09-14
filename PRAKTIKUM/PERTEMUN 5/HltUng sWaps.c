#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void swap(int *xp, int *yp) {
   int temp = *xp;
   *xp = *yp;
   *yp = temp;
}

void bubbleSort(int arr[], int n, int *jumlah) {
    int i, j;
    for (i = 0; i < n - 1; i++) {
        int swapped = 0;
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(&arr[j], &arr[j + 1]);
                swapped = 1;
                (*jumlah)++;
            }
        }
        if (swapped == 0)
            break;
    }
}


int main() {
int n, jumlah = 0; //jumlah menghitung jumlah swap yang terjadi
   scanf("%d", &n);
   int arr[n];

   for(int i = 0; i < n; i++){
      scanf("%d", &arr[i]);
   }

   bubbleSort(arr, n, &jumlah);

   printf("%d", jumlah);   
   return 0;
}