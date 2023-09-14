#include <stdio.h>

int main() {
    int nilai;

    printf("Masukkan nilai: ");
    scanf("%d", &nilai);

    if (nilai >= 90 && nilai <= 100) {
        printf("nilai: A\n");
    } else if (nilai >= 80 && nilai < 90) {
        printf("nilai: B\n");
    } else if (nilai >= 70 && nilai < 80) {
        printf("nilai: C\n");
    } else if (nilai >= 60 && nilai < 70) {
        printf("nilai: D\n");
    } else {
        printf("nilai: E\n");
    }

    return 0;
}
