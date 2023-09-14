#include<iostream>
using namespace std;

int main(){
    int N;
    cout << "N: "; cin >> N;
    N = N + 1;
    while (N > 0){
        int var = 1;
        while(var < N){
        cout << var << " ";
        var = var + 1;
    }
    cout << "\n";
    N = N - 1;
    }
    return 0;
}