#include<iostream>
using namespace std;

// int main(){
//     int umroh = 32000000, tabungan, bulan = 1;
//     do{
//         bulan += 1; tabungan += 1500000;
//         printf("Bulan %d ", bulan); cout << tabungan << "\n";
//     } while(umroh > tabungan);
// }

int Tabungan(int bulan, int tabungan, int umroh) {
    while (umroh > tabungan) {
        bulan += 1; 
        tabungan += 1500000;
        printf("Bulan %d %d\n", bulan, tabungan);
    }
    return bulan;
}

int main() {
    int umroh = 32000000, tabungan = 0, bulan = 1;
    int Bulan = Tabungan(bulan, tabungan, umroh);
    printf("Total bulan yang diperlukan: %d\n", Bulan);
    return 0;
}