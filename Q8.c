// Question: https://www.hackerrank.com/challenges/sum-of-digits-of-a-five-digit-number/problem

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int n, i, sum = 0;
    scanf("%d", &n);
    
    for(i = n; i != 0; i=i/10)
    {
        sum = sum + i%10;
    }
    printf("%d",sum);
}
