#include<stdio.h>

void bubbleSort(int arr[], int n) { //bubble sort
    int i, j, ke; 
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        ke++;
        printf("Proses ke-%d: \n", ke);
        for(int k = 0; k < n; k++){
            printf("%d ", arr[k]);
        }
        printf("\n");
        }
    }
}

void printArray(int arr[], int n) {
    int i;
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main(){
int n, arr[n];
    printf("Masukan n array: ");
    scanf("%d",&n);

    printf("Masukan %d bilang interger:\n", n);
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }

    bubbleSort(arr, n);

    printf("Arr setelah diurutkan dari kecil:\n");
    printArray(arr, n);

    return 0;
}