#include <iostream>
using namespace std;

int main(){
int A[50][50];
int i, j, n;
string pemisah = "  ";

cout << "Enter the number of lines:";
cin >> n;

for (i = 0; i <n; i++) {
	for (j= 0; j <n-1-i; ++j)      
    cout << pemisah;

	for (j = 0; j <= i; ++j) {
	    if (j==0 || j == i) A[i][j] = 1;
	    else A[i][j] = A[i-1][j-1] + A[i - 1][j];
	    cout << " " << A[i][j] << pemisah;
		}
	cout << endl
	} 
return 0;
}
