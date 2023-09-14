#include <iostream>
using namespace std;

int main() {
int x=0,y=0,n=9,a,z,s;
 string pemisah = "  ";
  s=n;
 z=s;
 
 for (x=0; x<=n; x++) {
 	a=1;
 	for (z=s; z>=0; z--) {
 		cout << pemisah;
	 }
	 for (y=0; y<=x; y++) {
	 	cout << " " << a << pemisah;
	 	a = a*(x-y)/(y+1);
	 }
	 cout << endl;
	 s--;
 }

 return 0;
}

