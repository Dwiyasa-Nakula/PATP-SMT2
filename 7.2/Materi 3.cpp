#include<stdio.h> //pakai C

int maks(int A[], int lenght){
    int besar = A[0];
    for(int i = 0; i < lenght; i++){
        if(besar < A[i]) besar = A[i];
    }
    return besar;
}

int main(){
    int A[]={1,233,23,34,22,24,6,76,36};
    int lenght = sizeof(A)/sizeof(*A);

    int besar = maks(A, lenght);
    printf("Bilangan terbesar adalah: %d", besar);
}