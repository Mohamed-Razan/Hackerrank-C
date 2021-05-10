// Question: https://www.hackerrank.com/challenges/playing-with-characters/problem

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    char a, b[20], s[20];
    scanf("%c",&a);
    scanf("%s",&b);
    scanf("\n");
    scanf("%[^\n]", s);

    printf("%c\n",a);
    printf("%s\n",b);
    printf("%s",s);
}
