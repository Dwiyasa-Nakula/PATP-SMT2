#include <stdio.h>

int main() {
    int angka = 10;
    int *ptr;

    ptr = &angka; 
    *ptr = 20; 

    printf("Nilai angka: %d\n", angka);

    return 0;
}
