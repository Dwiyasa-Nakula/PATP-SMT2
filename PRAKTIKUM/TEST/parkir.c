#include <stdio.h>
#include <stdlib.h>

int parkir(const void *a, const void*b) {
    return (*(int*)a - *(int*)b);
}

int main() {
    int N, K;
    scanf("%d %d", &N, &K); // membaca jumlah kendaraan dan kapasitas parkiran
    int parking[N][2];
    for (int i = 0; i < N; i++) {
        scanf("%d %d", &parking[i][0], &parking[i][1]); // membaca waktu kedatangan dan keberangkatan tiap kendaraan
    }

    qsort(parking, N, sizeof(parking[0]), parkir); // mengurutkan kendaraan berdasarkan waktu keberangkatan

    int parked[K][2];
    int parkedCount = 0;
    for (int i = 0; i < N; i++) {
        if (parking[i][0] >= 24 || parking[i][1] <= 0) { // mengecek apakah kendaraan datang atau pergi saat parkiran tutup
            continue;
        }
        if (parkedCount < K) { // mengecek apakah parkiran masih memiliki tempat kosong
            parked[parkedCount][0] = parking[i][0];
            parked[parkedCount++][1] = parking[i][1]; // memarkirkan kendaraan
        } else {
            if (parking[i][0] >= parked[0][1]) { // mengecek apakah kendaraan dapat menggantikan kendaraan yang sudah pergi
                parked[0][0] = parking[i][0];
                parked[0][1] = parking[i][1]; // memarkirkan kendaraan
                qsort(parked, K, sizeof(parked[0]), parkir); // mengurutkan kembali kendaraan yang diparkir
            } else {
                printf("Macet\n"); // jika tidak dapat memarkirkan kendaraan tanpa menyebabkan kemacetan
                return 0;
            }
        }
    }
    printf("Lancar\n"); // jika semua kendaraan dapat diparkirkan tanpa menyebabkan kemacetan
    return 0;
}