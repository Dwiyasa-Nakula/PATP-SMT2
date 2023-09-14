#include <stdio.h>
#include <string.h>

struct Mahasiswa {
    char nama[100];
    int nrp;
    double ipk;
};

int main(void){
    int q;
    scanf("%d", &q);
    struct Mahasiswa arr[q];

    for(int i=0; i < q; i++){
        scanf("%s %d %lf", arr[i].nama, &arr[i].nrp, &arr[i].ipk);
    }
       
    for(int i=0; i < q; i++){
        printf("%s %d %.2lf\n", arr[i].nama, arr[i].nrp, arr[i].ipk);
    }

    return 0;
}