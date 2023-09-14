#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//problems with \n yang gaib

int main(){
    int angkaBulat;
    float angkaKoma;
    char karakter, ketupat[100];

    scanf("%d", &angkaBulat);
    getchar();
    printf("ini angka bulat = %d\n", angkaBulat);

    scanf("%f", &angkaKoma);
    getchar();
    printf("ini angka koma = %.3f\n", angkaKoma);

    scanf("%c", &karakter);
    getchar();
    printf("ini karakter = %c\n", karakter);

    scanf("%s", ketupat);
    getchar();
    printf("ini string = %s\n", ketupat);
}

//atau bisa "%f" menjadi " %f" hal tersebut applied to all

/*
#include<stdio.h>
#include<stdlib.h>

int main() {
    int angkaBulat;
    float angkaKoma;
    char karakter; 
    char ketupat[100];

    scanf("%d", &angkaBulat);
    printf("ini angka bulat = %d\n", angkaBulat);

    scanf(" %f", &angkaKoma);
    printf("ini angka koma = %.3f\n", angkaKoma);

    scanf(" %[^\n]", &karakter);
    printf("ini karakter = %c\n", karakter);

    scanf(" %[^\n]", &ketupat);
    printf("ini string = %s\n", ketupat);
}
*/

// #include <stdio.h>
// #include <string.h>
// #include <math.h>
// #include <stdlib.h>

// int main() 
// {
//     char ch, s[100], sen[100];

//     scanf("%c", &ch); //input 1 character
//     scanf("%s", s); //input 1 word
//     scanf(" %[^\n]s", sen); //input 1 line

//     printf("%c\n", ch);
//     printf("%s\n", s);
//     printf("%s\n", sen);

//     return 0;
// }