#include <stdio.h>

int main() {
    int i;

    printf("Menggunakan perulangan for: ");
    for (i = 1; i <= 5; i++) {
        printf("%d ", i);
    }

    printf("\n");

    printf("Menggunakan perulangan while: ");
    i = 1;
    while (i <= 5) {
        printf("%d ", i);
        i++;
    }

    printf("\n");

    printf("Menggunakan perulangan do-while: ");
    i = 1;
    do {
        printf("%d ", i);
        i++;
    } while (i <= 5);

    printf("\n");

    return 0;
}
