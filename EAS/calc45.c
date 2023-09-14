#include <stdio.h>
#include <string.h>

struct Calculator { //struct
    float angka1;
    float angka2;
    char operasi[20];
    float hasil;
} calc;

int main() {
    scanf("%s", calc.operasi); //input operator
    scanf("%f", &calc.angka1); //input angka1
    scanf("%f", &calc.angka2); //input angka2

    if (strcmp(calc.operasi, "jumlah") == 0) { //penjumlahan
        calc.hasil = calc.angka1 + calc.angka2;
    } else if (strcmp(calc.operasi, "kurang") == 0) { //pengurangan
        calc.hasil = calc.angka1 - calc.angka2;
    } else if (strcmp(calc.operasi, "kali") == 0) { //perkalian
        calc.hasil = calc.angka1 * calc.angka2;
    } else if (strcmp(calc.operasi, "bagi") == 0) { //pembagian
        calc.hasil = calc.angka1 / calc.angka2;
    }

    printf("%.1f\n", calc.hasil);//ouptup

    return 0;
}