#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){
    float a, b, c, hasil;
    cout << "Akar persamaan kuadrat ax^2+bx+c" << endl;
    cout << "Masukkan nilai a: "; cin >> a;
    cout << "Masukkan nilai b: "; cin >> b;
    cout << "Masukkan nilai c: "; cin >> c;

    if(a == 0){
        if(b == 0){
            cout << "Tidak ada solusi untuk akar kuadrat ini.";
        }
        hasil = (-1*c)/b; cout << "-" << c << "/" << b << endl;
        cout << hasil;
    }
    else if((pow(b,2)-4*a*c) < 0){
        cout << "Akar dari persamaan kuadrat : " << a << "x^2+(" << b << ")x+(" << c << ")" << endl;
        cout << "Tidak ada akar-akar asli";
    }
    else{
        cout << "Akar dari persamaan kuadrat : " << a << "x^2+(" << b << ")x+(" << c << ")" << endl;
        cout << fixed << setprecision(3) << "x1 = " << ((-1*b+sqrt(pow(b,2)-4*a*c))/(2*a)) << " " << "x2 = " << ((-1*b-sqrt(pow(b,2)-4*a*c))/(2*a));
    }
    return 0;
}
/*
#include<iostream>
#include<cmath>
using namespace std;

void is_ab_zero (float a, float b){
    if (a == 0 && b == 0){
        cout << "No Solution";
    }
}

void is_a_zero (float a, float b, float c){
    if (a == 0){
        cout << (-c) / b;
    }
}

void is_D_underzero (float a, float b, float c){
    float discriminant = (pow(b, 2) - (4 * a * c));
    if (discriminant < 0){
        cout << "There are no real roots";
    }
    else{
        float first_root = ((-b) + sqrt(discriminant)) / (2 * a);
        first_root = round(first_root * 1000.0) / 1000.0;
        float second_root = ((-b) - sqrt(discriminant)) / (2 * a);
        second_root = round(second_root * 1000.0) / 1000.0;
        cout << "Akar Pertama : " << first_root << endl;
        cout << "Akar Kedua : " << second_root << endl;
    }
}

int main(){
    float a, b, c, first_root, second_root;
    float discriminant = (pow(b, 2) - (4 * a * c));
    cout << "Nilai a : ";
    cin >> a;
    cout << "Nilai b : ";
    cin >> b;
    cout << "Nilai c : ";
    cin >> c;
    is_ab_zero(a, b);
    is_a_zero(a, b, c);
    is_D_underzero(a, b, c);
    return 0;
}
*/