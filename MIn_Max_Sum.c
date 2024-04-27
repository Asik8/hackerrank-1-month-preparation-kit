#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <stdbool.h>

#define lli long long int
#define max_size 100000

int compare(const void *a, const void *b)
{
    return (*(lli *)a - *(lli *)b);
}

int main()
{

    lli ar[5];
    for (int i = 0; i < 5; i++)
    {
        scanf("%lld", &ar[i]);
    }
    qsort(ar, 5, sizeof(lli), compare);

    lli min = 0, max = 0;
    for (int i = 0; i < 4; i++)
    {
        min += ar[i];
    }
    for (int i = 5 - 1; i > 0; i--)
    {
        max += ar[i];
    }
    printf("%lld %lld\n", min, max);

    return 0;
}