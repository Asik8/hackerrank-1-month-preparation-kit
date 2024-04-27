#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
#include<stdbool.h>

#define lli long long int
#define max_size 100000

int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int main()
{
        int n,p=0,ne=0,z=0;
        scanf("%d",&n);
        int ar[n];
        for (int i = 0; i < n; i++) {
            scanf("%d",&ar[i]);
            if(ar[i]<0)
                ne++;
            else if(ar[i]>0)
                p++;
            else
                z++;
        }

        printf("%.6f\n%.6f\n%.6f\n",p/(float)n,ne/(float)n,z/(float)n);

    return 0;
}