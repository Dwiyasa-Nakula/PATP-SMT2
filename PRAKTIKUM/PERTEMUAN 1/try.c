#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int max_of_four(int a, int b, int c, int d){
    int ans = a;
    if(b > ans && b > c){
        ans = b;}
    else if(c > ans && c > d){
        ans = c;}
    else if(d > ans){
        ans = d;}
    else{ans = a;}
    return ans;
}


int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}
