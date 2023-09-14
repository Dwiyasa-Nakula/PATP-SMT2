#include<iostream>

using namespace std;

int jumlah(int n) 
{
    int j=0;
    int bil=2;
    int tanda=1;
    while (bil<=abs(n))
    {
        j += bil*tanda;
        bil+=2;
        tanda = tanda*-1;
    }
    return j;
}

int main()
{
    int hasil = jumlah(-4);
    cout << hasil;
}