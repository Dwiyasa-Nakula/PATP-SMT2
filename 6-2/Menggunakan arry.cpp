#include<iostream>
using namespace std;

/*int main(){
    int arr[5], i;
    for(i = 0;i < 5;i++){
        cin >> arr[i];
    }

    for(i=0;i<5;i++){
        cout << "angka ke-" << i+1 << " adalah " << arr[i] << endl;
    }
    return 0;
}*/

int main() {
    // Declare a 2D array with 3 rows and 4 columns
    int n, m;
    cout << "Enter the row of array: "; cin >> n;
    cout << "Enter the coloum of array: "; cin >> m;
    int arr[n][m];

    // Input values for the array using cin
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << "Enter value for arr[" << i << "][" << j << "]: ";
            cin >> arr[i][j];
        }
    }

    // Print the array
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}