#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int lembar, harga = 450, i;
    cout << "Berapa lembar: "; cin >> lembar;
    
for (i = 1; i <= lembar ; i += 1){
    printf("%d ", i); cout << i*harga << "\n";
}
}