#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include<math.h>
#include <string.h>


int main()
{
    char a[100];
    scanf("%s", a);
    int i = 0;
    int j = 49;
    int l = 0;
    while (j != 52)
    {
        i = 0;
        while (a[i])
        {
            if (a[i] == j)
                {
                    printf("%c", a[i]);
                    l = l + 2;
                    if ( l < strlen(a))
                        printf("+");
                }
            i++;
        }
        j++;
        
    }
}