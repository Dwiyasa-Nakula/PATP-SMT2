#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    printf("Input\n");
    //input antara 1 atau 2
    int input;
    scanf("%d", &input); 
    
    //pada kasus 1 (angka)
    if(input == 1){
    //inut matrix
    int a, b, c, d, e, f, g, h, i;
    scanf(" %d %d %d", &a, &b, &c); 
    scanf(" %d %d %d", &d, &e, &f); 
    scanf(" %d %d %d", &g, &h, &i);
    printf("Output\n"); 
    //transpose matrix & print
    printf("%d %d %d\n", a, d, g);
    printf("%d %d %d\n", b, e, h);
    printf("%d %d %d\n", c, f, i);
    }

    //Pada kasus 2 (huruf)
    else if(input == 2){
    //input matrix 
    char a[20], b[20], c[20], d[20], e[20], f[20], g[20], h[20], i[20];
    scanf(" %s %s %s", &a, &b, &c); 
    scanf(" %s %s %s", &d, &e, &f); 
    scanf(" %s %s %s", &g, &h, &i);
    printf("Output\n");
    //transose matrix & print
    printf("%s %s %s\n", a, d, g);
    printf("%s %s %s\n", b, e, h);
    printf("%s %s %s\n", c, f, i);
    }
}