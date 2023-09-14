#include <stdio.h>
#include <math.h>

int main() {
    int N;
    printf("Enter the value of N: ");
    scanf("%d", &N);
    int hasil = (2 << N-1) % 5;
    printf("%d", hasil);
    return 0;
}