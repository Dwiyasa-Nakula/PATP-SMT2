#include <iostream>
using namespace std;

int main() {
    int N=5, res, n, k;

    for (int line = 0; line < N; line++)
    {
        for (int i = 0; i <= line; i++) 
		{
    	res = 1;
		n = line;
		k = i;	
    	if (k > n - k)
    		k = n - k;
    	for (int i = 0; i < k; ++i)
	    	{
            res *= (n - i);
            res /= (i + 1);
	    	}
        cout <<" "<< res;
        }
    cout <<"\n";
    }
 return 0;
}
