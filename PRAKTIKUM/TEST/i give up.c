#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int arr[10000], n=0, a, b, c, d, e, f, g;
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    //scan input
    while (scanf("%d", &arr[n]) == 1) { n++;}
    //perkalian
    a = arr[0] * arr[1];
    b = arr[1] * arr[3];
    c = arr[0] * arr[2];
    d = arr[1] * arr[2];
    e = arr[0] * arr[3];
    f = arr[0] * arr[1] * arr[3];
    g = arr[0] * arr[1] * arr[2] * arr[3];

    // mencari bil terbesar
    int HasilSubset[] = {a, b, c, d, e, f, g};
    int BIG = HasilSubset[n];
    for (int i = 1; i < 7; i++) {
        if (HasilSubset[i] > BIG) {
            BIG = HasilSubset[i];
        }
    }
    // mencari perkalian subset
    for (int i = 0; i < n; i++) {
        int product = arr[i];
        if (product > BIG) {
            BIG = product;
        }
        for (int j = i + 1; j < n; j++) {
            product *= arr[j];
            if (product > BIG) {
                BIG = product;
            }
        }
    }
    //print hasil bil terbesar
    printf("%d", BIG);
    return 0;
}