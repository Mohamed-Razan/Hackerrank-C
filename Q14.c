// Question: https://www.hackerrank.com/challenges/frequency-of-digits-1/problem

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char s[1000];
    int i, a[10];
    scanf("%s",&s);
    for(i = 0; i < 10; i++)
    {
        a[i] = 0;
    }
    for(i = 0; i < strlen(s); i++)
    {
        if((s[i] > 47)&&(s[i] < 58))
        {
            a[s[i]-48]++;
        }
    }

    for(i = 0; i < 10; i++)
    {
        printf("%d ",a[i]);
    }
}
