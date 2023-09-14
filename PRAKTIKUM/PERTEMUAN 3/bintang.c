#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int x, a = 1;
    scanf("%d", &x);
    int y = x;
    for(int h = 0; h < y; h++){
    for(int i = 0; i < x; i++){
        printf("%s", "*");
    }
    printf(" "); 
    for(int j = 0; j < a; j++){
        printf("%s", "*");
    }
    printf("\n");
    a = a + 1;
    x = x - 1;
    }
    return 0;
}
