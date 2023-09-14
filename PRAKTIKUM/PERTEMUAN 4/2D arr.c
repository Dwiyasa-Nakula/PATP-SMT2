#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct DuaDimensi{
    int genap;
    int ganjil;
};

int main(void){
    int r, c;
    scanf("%d %d", &r, &c);
    
    int **arr = (int **)malloc(r * sizeof(int *)); //malloc
    for(int i=0; i < r; i++){
        arr[i] = (int *)malloc(c * sizeof(int));
    }

    struct DuaDimensi *Count = (struct DuaDimensi *)malloc(r * sizeof(struct DuaDimensi)); //dinamic malloc

    for(int i=0; i < r; i++){ //input, mengecek dan menghitung
        Count[i].genap = 0;
        Count[i].ganjil = 0;

        for(int j=0; j < c; j++){
            scanf("%d", &arr[i][j]);
            if(arr[i][j] % 2 == 0){
                Count[i].genap++;
            } else {
                Count[i].ganjil++;
            }
        }
    }

    for(int i = 0; i < r; i++){ //output
        printf("Baris %d: %d ganjil, %d genap \n", i+1, Count[i].ganjil, Count[i].genap);
    }
    
    free(Count);
    for(int i = 0; i < r; i++){
        free(arr[i]);
    } free(arr);

    return 0;
}