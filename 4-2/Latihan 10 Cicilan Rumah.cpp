#include<iostream>
#include <iomanip>
using namespace std;

// int main(){
//     float rumah = 75000000, DP = 30000000, cicilan = 500000; int i;
//     for (i = 1; i <= 240 ; i += 1, DP += cicilan){
//     printf("Bulan %d ", i); cout << fixed << setprecision(0) << DP << "\n";
//     }
// }
//untuk menghitung pada tahun ke 2 berapa yang telah dikeluarkan

int Cicilan(int i, float DP, float cicilan){
    for (i = 1; i <= 240 ; i += 1, DP += cicilan){
    cout << "Bulan: " << i << " Cicilan: " << fixed << setprecision(0) << DP << endl;
    }
    return DP - 500000;
}

int main(){
    float rumah = 105000000, DP = 30000000, cicilan = 500000; int i = 1;
    int Total = Cicilan(i, DP, cicilan);
    cout << "Total Cicilan yang diperlukan: " << Total << endl;
}