#include<iostream>

int jumlah(int n) //jumlah di jadikan function agar dapat ditulis dengan simple
{
    int j=0;
    int bil=1;
    while (bil<=n)
    {
        j += bil;
        bil ++;
    }
    return j;
}

int main()
{
    int hasil = jumlah(5);
    std::cout << hasil;
}