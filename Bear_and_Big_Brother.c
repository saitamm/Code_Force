#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include<math.h>
#include <string.h>

int main()
{
    int a, b;
    int l = 0;
    scanf("%d %d", &a, &b);
    while (1)
    {
        if (a > b)
        {
            printf("%d", l);
            break;
        }
        a = a * 3;
        b = b * 2;
        l++;
    }
}