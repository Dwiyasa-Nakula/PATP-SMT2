#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    float cicil = 500000, total = 0, bunga = 0.01, bunga_bulan;
    total += 30000000;
    for(int bulan = 1; bulan <= 240; bulan++){
        bunga_bulan = cicil* bunga;
        total = total + cicil + bunga_bulan;
        cout << "Bulan " << bulan << " total cicilan Rp " << fixed << setprecision(0) << total << " juta" << endl;
    }
}