#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the amout of array: "; cin >> n;
    int arr[n];
        for(int i = 0; i < n; i++){
        cout << "Enter value for arr[" << i << "]: ";
            cin >> arr[i];
    }
    int indexbig = 0;
    int largest = arr[0];
    for (int i=0; i < n; i++){
        if(arr[i] > largest){
            largest = arr[i];
            indexbig = i;
        }
    }
    int indexsmall = 0;
    int smallest = arr[0];
    for (int i=0; i < n; i++){
        if(arr[i] < smallest){
            smallest = arr[i];
            indexsmall = i;
        }
    }
    cout << "The largest number in the array is: " << largest << " index: " << "arr[" << indexbig << "]" << endl;
    cout << "The smallest number in the array is: " << smallest << " index: " << "arr[" << indexsmall << "]" << endl;
}