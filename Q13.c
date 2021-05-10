// Question: https://www.hackerrank.com/challenges/printing-tokens-/problem

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char s[10000];
    int i;
    scanf("%[^\n]", s);
    
    for(i = 0; i < strlen(s); i++)
    {
        if(s[i] == 32)
            printf("\n");
        else
            printf("%c",s[i]);
    }
}
