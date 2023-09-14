#include <iostream>
#include<cstring>
using namespace std;
 
int main() {
    char a[] = {"ini juga"};
    int count = strlen(a);
    char *p = &a[0];

    for (int i = 0; i < count; i++) {
        for (int j = 0; j < i; j++) {
            cout << " ";
        }
        cout << *p++ << endl;
    }
    return 0;
}

/*still in progress
expected result
i
 n
  i
   
    j
     u
      g
       a
*/
