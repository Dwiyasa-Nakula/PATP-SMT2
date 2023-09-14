#include<iostream>
using namespace std;
int jumlah(int n){
    int total=0; int a=0; int b=1; int c=0;
    while (c<n*2){
        if(c%2 == 1){
            total += c; c=a+b; a=b; b=c;   
        }
        else{
            c=a+b; a=b; b=c;
        }
    }
    return total;
}
int main(){
    int hasil = jumlah(5); cout << hasil;
}