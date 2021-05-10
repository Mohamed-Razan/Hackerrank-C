// Question: https://www.hackerrank.com/challenges/printing-pattern-2/problem

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, j, k, l, m, x, y, count = 0, z;
    scanf("%d",&n);
    for(i = n; i > 0; i--)
    {
        if(i == n)
        {
            for(k = 0; k < (2*n-1); k++)
            {
                printf("%d ",n);
            }
        }
        else
        {
            x = n;
            for(j = i; j <= n; j++)
            {
                printf("%d ",x);
                x--;
            }
            for(l = 0; l < (2*x-1); l++)
            {
                printf("%d ",(x+1));
                count = 1;
            }
            for(m = i, y = x+1; m <= n; m++, y++)
            {
                if(count == 0)
                {
                    if(m != n)
                        printf("%d ",y+1);
                }
                else if(count == 1)
                {
                        printf("%d ",y);
                }
            }
        }
        printf("\n");
        count = 0;
    }
    x = n;
    for(i = n; i > 1; i--)
    {
        y = n;
        z = (n+2)-i;
        for(j = i; j > 1; j--)
        {
            printf("%d ",y);
            y--;
        }
        for(k = x; k <= n; k++)
        {
            printf("%d ",z);
        }
        for(l = 0; l < i-1; l++)
        {
            printf("%d ",z);
            z++;
        }
        x = x - 2;
        printf("\n");
    }
}
