#include<iostream>
using namespace std;

void swapA(int &a, int &b) { //pass-by-address
   int temp;
   temp = a; /*save the value at address a*/
   a = b;    /*put b into a*/
   b = temp; /*put a into b*/
  
   return;
}

void swapB(int c, int d) { //pass-by-value wont swap
   int temp;
   temp = c; /*save the value at address a*/
   c = d;    /*put b into a*/
   d = temp; /*put a into b*/
  
   return;
}

void swapC(int *e, int *f) { //pass-by-refrence
   int temp;
   temp = *e; /*save the value at address a*/
   *e = *f;    /*put b into a*/
   *f = temp; /*put a into b*/
  
   return;
}

int main(){
    int a, b, c , d, e, f;
    cout << "Input A:"; cin >> a; cout << "Input B:"; cin >> b;
    cout << "Input c:"; cin >> c; cout << "Input d:"; cin >> d;
    cout << "Input e:"; cin >> e; cout << "Input f:"; cin >> f;  
    cout << "A:" << a << " and B: " << b << endl;
    cout << "c:" << c << " and d: " << d << endl;
    cout << "e:" << e << " and f: " << f << endl;
    swapA(a, b); //pass-by-address
    swapB(c, d); //pass-by-Value wont swab
    swapC(&e , &f); //pass-by-refrence
    cout << " di Swab menjadi " << "A:" << a << " and B: " << b << endl;
    cout << " di Swab menjadi " << "C:" << c << " and D: " << d << endl;
    cout << " di Swab menjadi " << "E:" << e << " and f: " << f << endl;
}
