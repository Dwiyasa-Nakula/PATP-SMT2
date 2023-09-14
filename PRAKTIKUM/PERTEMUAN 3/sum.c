#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
 int n = 12, i = 0, arr[20], a = 0;
 scanf("%d", &n);
 
 while(n > 0)
 {
 int mod = n % 10; 
 arr[i] = mod; 
 n = n / 10; 
 i = i + 1;
 }
 
 for (int i = 0; i < 20; i++) {
 a = a + arr[i];
 }
 printf("%d", a);

 return 0;
}