#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
    int *arr, n, i, PalingBesar;

    scanf("%d", &n);

    arr = (int*) malloc(n * sizeof(int));
    for(i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    PalingBesar = arr[0];
    for(i = 0; i < n; i++){
        if(arr[i] > PalingBesar);
    }

    printf("%d", PalingBesar);

    free(arr);

    return 0;
} 
