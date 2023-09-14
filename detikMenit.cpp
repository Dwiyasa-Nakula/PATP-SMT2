#include<iostream>
#include<cmath>
using namespace std;

int main(){
   int bil, detik, menit, jam, hari;

   cout<<"Please Enter your time in (second): "; cin >> bil;

    if (bil < 0) {
        cout << "mau jadi penjelajah waktu?" <<endl;

    } else {
    detik = bil % 60;
    bil = bil/60;

    menit = bil % 60;
    bil = bil/60;

    jam = bil % 24;
    hari = bil/24;

    cout << ceil(hari) << " hari " << ceil(jam) << " jam " << ceil(menit) << " menit " << ceil(detik) << " detik ";
    }
}
