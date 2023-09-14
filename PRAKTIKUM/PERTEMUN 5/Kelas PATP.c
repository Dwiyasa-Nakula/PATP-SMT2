#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

typedef struct Kelas{
    char nama[100];
    int NRP;
} Mahasiswa;

void swap(Mahasiswa *xp, Mahasiswa *yp) {
   Mahasiswa temp = *xp;
   *xp = *yp;
   *yp = temp;
}

void bubbleSort(Mahasiswa arr[], int N) {
   int i, j, swapped;
   for (i = 0; i < N-1; i++) {
      swapped = 0;
      for (j = 0; j < N-i-1; j++) {
         if (arr[j].NRP > arr[j+1].NRP) {
            swap(&arr[j], &arr[j+1]);
            swapped = 1;
         }
      }
      if (swapped == 0)
         break;
   }
}

int main() {
   int N;
   scanf("%d", &N);

   Mahasiswa arr[N];
   
   for(int i = 0; i < N; i++){
      scanf("%d %s", &arr[i].NRP, arr[i].nama);
   }

   bubbleSort(arr, N);

   for(int i = 0; i < N; i++){
      printf("%s\n", arr[i].nama); 
   } 
   return 0;
}
