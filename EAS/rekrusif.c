#include <stdio.h>

int HitungJumlahAngka(int n) {
    if (n == 0) {
        return 0;
    } else {
        return 1 + HitungJumlahAngka(n / 10);
    }
}

int main() {
    int number = 9876;
    int count;

    count = HitungJumlahAngka(number);

    printf("Jumlah digit dalam bilangan %d adalah %d\n", number, count);

    return 0;
}
