#include<stdio.h>
#include<stdlib.h>

//swap without temp

int main(){
    int a = 1, b = 2; // bisa diubah ke angka apapun

    printf("nilai a awal = %d\n", a);
    printf("nilai b awal = %d\n", b);

    a = a - b; // -1 
    b = b + a; // 1
    a = b - a; // 2
    
    // temp = a;
    // a = b;
    // a = temp;
    
    printf("nilai a akhir = %d\n", a);
    printf("nilai b akhir = %d\n", b);
}