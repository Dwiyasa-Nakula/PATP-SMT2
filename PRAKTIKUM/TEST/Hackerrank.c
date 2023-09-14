#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.
void calculate_the_maximum(int n, int k) {

  int andg=0,org=0,xorg=0;
 for(int i = 1;i<=n;i++)
 {
     for(int j = i+1;j<=n;j++)
     {
         
       if((i&j) > andg && (i&j) < k){
         andg=i&j;
       }
       if( (i|j) > org && (i|j) < k) {
         org = i|j;
       }
       if( (i^j) > xorg && (i^j) < k){
         xorg = i^j;
       }
     }
 }
 printf("%d\n%d\n%d",andg,org,xorg);
}
int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}

//https://www.codingbroz.com/bitwise-operators-in-c-solution/