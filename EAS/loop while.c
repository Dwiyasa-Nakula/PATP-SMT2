#include <stdio.h>

int main() {
    int count = 1;
    
    while (count <= 5) {
        printf("%d ", 6 - count);
        count++;
    }

    printf("\n");

    return 0;
}
