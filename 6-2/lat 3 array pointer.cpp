#include <iostream>
using namespace std;
 
int main()
{
  int A[] = {4,1,6,2,7,3};
  int *p = &A[0];
  
  for (int i=0; i<6; i++) {
  	cout << *p++ << endl;
  }
}
