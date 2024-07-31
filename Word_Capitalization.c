#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include<math.h>
#include <string.h>

int main()
{
    char a[10000];
    scanf("%s", a);
    int i = 0;
    while (a[i])
    {
        if (i == 0 && a[i] >= 97 && a[i] <= 122)
            a[i] = a[i] -32;
        write(1, &a[i], 1);
        i++;
    }
}