#include<stdio.h>
#include<iostream>
using namespace std;

int main()
{
    int radius;

    cout <<"radius keliling: ";
    cin >> radius;    

    int r = radius;
    const float pi = 3.14;
    float luas =pi*r*r;

    printf("luas : %f\n", luas);
    return 0;
}