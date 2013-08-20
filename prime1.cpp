// prime number generator.

#include <stdio.h>
#include <math.h>

using namespace std;

int main()
{
    int n,m;

    scanf("%d %d", &n, &m);
    int * primes = new int[m-n+1];

    for(int p=2;p*p<=m;++p)
    {
        int less = n / p;
        less *= p;
        for(int j=less;j<=m;j+=p) if(j != p && j >= n)
            primes[j - n] = 1;
    }

    for(int i=0;i<m-n+1;++i)
    {
        if(primes[i] == 0 && n+i != 1) // 1 is not a prime number by its nature definition
            printf("%d\n",n+i);
    }
}
