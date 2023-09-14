#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int a, b, c;
    cout << "Masukkan nilai a: " ;
    cin >> a;
    cout << "Masukkan nilai b: " ;
    cin >> b;
    cout << "Masukkan nilai c: " ;
    cin >> c;

    int BIG = a;
    if(b > BIG && b > c){
        BIG = b;}
    else if(c > BIG){
        BIG = c;}
    else{BIG = a;}
    
    cout << "Nilai tertinggi adalah: " << BIG;
    return 0;
}

/*
#include<iostream>
using namespace std;

void get_big(int A, int B, int C){
    int BIG;
    BIG = A;
    if (B > BIG){
        BIG = B;
        if (C > BIG){
            BIG = C;
        }
    }
    cout << "Nilai Terbesar : " << BIG << endl;
}
int main(){
    int A, B, C, BIG;
    cout << "Nilai A : ";
    cin >> A;
    cout << "Nilai B : ";
    cin >> B;
    cout << "Nilai C : ";
    cin >> C;
    get_big(A, B, C);
}
*/