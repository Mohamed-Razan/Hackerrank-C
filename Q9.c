// Question: https://www.hackerrank.com/challenges/bitwise-operators-in-c/problem

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


void calculate_the_maximum(int n, int k) {
    int i, j, x, y, z, max1 = 0, max2 = 0, max3 = 0;
    for(i = 1; i <= n; i++)
    {
        for(j = i+1; j <= n; j++)
        {
            x = i&j;
            y = i|j;
            z = i^j;
            if((x > max1)&&(x < k))
                max1 = x;
            if((y > max2)&&(y < k))
                max2 = y;
            if((z > max3)&&(z < k))
                max3 = z;
        }
    }
    printf("%d\n%d\n%d",max1, max2, max3);
}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}
