#include<iostream>
using namespace std;

int jumlah(int n) //jumlah di jadikan function agar dapat ditulis dengan simple
{
    int sum=0;
    int i=0;
    while (i<=n-1)
    {
        sum += i;
        i ++;
    }
    return sum;
}

int main()
{
    int angka;
    cin >> angka;
    int hasil = jumlah(angka);
    cout << hasil;
}