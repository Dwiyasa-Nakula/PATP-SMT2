#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

typedef struct Kelas{
    int Umur;
    int Tingkat;
} Pasien;

void insertionSort(Pasien arr[], int N) {
   int i, j;
   Pasien key;
   for (i = 1; i < N; i++) {
      key = arr[i];
      j = i - 1;
      while (j >= 0 && (arr[j].Umur > key.Umur || (arr[j].Umur == key.Umur && arr[j].Tingkat < key.Tingkat))) {
         arr[j + 1] = arr[j];
         j = j - 1;
      }
      arr[j + 1] = key;
   }
}

int main() {
   int N;
   scanf("%d", &N);

   Pasien arr[N];
   
   for(int i = 0; i < N; i++){
      scanf("%d %d", &arr[i].Umur, &arr[i].Tingkat);
   }

   insertionSort(arr, N);

   for(int i = 0; i < N; i++){
      printf("%d %d\n", arr[i].Umur, arr[i].Tingkat);
   } 
   return 0;
}

