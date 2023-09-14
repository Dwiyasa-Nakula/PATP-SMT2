#include <iostream>
#include <cmath>
using namespace std;

int main(){
    float X, term =  1, prod = 1, count = 1, sum;
    cout << "X: "; cin >> X;

    while (term > 0.0001){
    sum = prod*count;
    term = (term*X)/count;
    count = count + 1;
    } 
    cout << sum;
} 