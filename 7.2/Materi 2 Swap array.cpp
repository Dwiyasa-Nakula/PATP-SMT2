#include<iostream>
using namespace std;

void Tukar(float *a, float *b) {
	float wadah;
	wadah = *a;
	*a = *b;
	*b = wadah;
}

void TukarMobil(float &a, float &b) {
	float wadah;
	wadah = a;
	a = b;
	b = wadah;
}

int main(void) {	
	 float hargaSepeda[7]={600, 1200, 3600, 2300, 5200, 7400, 1500};
     Tukar(&hargaSepeda[2], &hargaSepeda[5]);
     float hargaMobil[7]={900, 1600, 3100, 2800, 100009, 102934, 231432};
     TukarMobil(hargaMobil[2], hargaMobil[5]);
     printf("isi indeks Sepeda ke-2 = %g isi indeks ke-5 = %g\n", hargaSepeda[2], hargaSepeda[5]);
     printf("isi indeks Mobil ke-2 = %g isi indeks ke-5 = %g\n", hargaMobil[2], hargaMobil[5]);
}
