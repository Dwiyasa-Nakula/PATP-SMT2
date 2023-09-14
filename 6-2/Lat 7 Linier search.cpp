#include <iostream>
using namespace std;

// int a(int value){
//     int i;
//     int arr[11] = {10, 51, 2, 18, 4, 31, 13, 5, 23, 64, 29};
//         for(i = 0; i<11; i++){
//             if(arr[i]==value){
//                 return i;
//             }
//         }
//     return -1;
// }

// int main(){
//     int value;
//     cout << "angka yang dicari: "; cin >> value;
//     cout << a(value);
// }

int a(int arr[], int n, int value){
    for(int i = 0; i < n; i++){
        if(arr[i] == value){
            return i+1;
        }
    }
    return -1;
}

int main(){
    int n, value;
    cout << "Enter the amount of array: "; cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cout << "Enter value for arr[" << i << "]: ";
        cin >> arr[i];
    }
    cout << "Angka yang dicari: "; cin >> value;
    cout << a(arr, n, value);
    return 0;
}