#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int H1; int H2; int M1; int M2; int S1; int S2; 
    int jam, menit, detik, jamdetik, jammenit, waktu;
    printf("Masukan Waktu 1: "); scanf(" %d %d %d", &H1, &M1, &S1);
    printf("Masukan Waktu 2: "); scanf(" %d %d %d", &H2, &M2, &S2);
    
    if(0 <= H1, H2 <= 23) jam=(H2-H1); jamdetik=jam*3600;
    if(0 <= M1, M2 <= 59) menit=(M2-M1); jammenit=menit*60 ;
    if(0 <= S1, S2 <= 59) detik=(S2-S1);
    waktu=jamdetik + jammenit + detik ;
    printf("%d", waktu);
    return 0;
}
