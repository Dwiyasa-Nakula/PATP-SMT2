#include<iostream>

using namespace std;

int jumlah(int n) 
{
    int j=0;
    int bil=1;
    while (bil<=n)
    {
        j += bil;
        bil+=2;
    }
    return j;
}

int main()
{
    int hasil = jumlah(5);
    cout << hasil;
}