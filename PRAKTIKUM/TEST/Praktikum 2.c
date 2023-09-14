#include<stdio.h>
#include<ctype.h>
/*
V1
int main(){
  //deklarasi dan scanf
  char text[100]; int key;
  scanf("%d", & key);
  scanf("%s", text);
  
  //encripsi
   for (int i = 0; i < 100; i++) {
        if (text[i] >= 'a') {
            text[i] = ((text[i] - 'a' + key) % 26) + 'a';
        } else if (text[i] >= 'A') {
            text[i] = ((text[i] - 'A' + key) % 26) + 'A';
        }
    }
  
  //print text enkripsi
  printf("%s", text);
  return 0;
}
*/

//V2
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int input; char text[100]; //deklarasi input sebagau interger dan text input sebagai string
    scanf("%d", &input);//scan input
  
    if(input == 1){ //jika input == 1 (ASCII)
        scanf("%s", text); //input text yang mau dienkripsi
        for (int i = 0; i < 100; i += 3){ //cycle 3 angka (ASCII) yang dimasukan ke dalam array
            char PotonganASCII[4]; //mengambil 4 potongan ASCII (3 ASCII, 1 null terminator) 
            strncpy(PotonganASCII, text + i, 3); // menyalin 3 angka dari text ke PotoganASCII dimulai dengan i menggunakan strncpy dan sebagai buffer overflow
            PotonganASCII[3] = '\0'; //PotonganASCII menjadi null terminator
            char dekripsi = (char)atoi(PotonganASCII); //merubah dari char menjadi integer dengan atoi() lalu diubah menjadi char kembali dengan (char)
            printf("%c", dekripsi); //print hasil dekripsi
        }
    }
    else{ //Jika input 2 (text input)
        scanf(" %[^\n]", text); //membaca input text sampai enter
        int batasKata = strlen(text); //menghitung banyak karakter dalam input
        for (int i = 0; i < batasKata; i++){ //cycle huruf yang dijadiakan array
            int ASCII = (int)text[i]; //merubah dari karakter menjadi ASCII
            printf("%03d", ASCII); //print ascii dalam bentuk 3 angka
        }
    }
    return 0;
}
