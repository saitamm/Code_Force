#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int a[5][5];
    int i = 0;
    int j = 0 ;
    int *b = malloc(2 * sizeof(int));

    while (i < 5)
    {
        j = 0;
        while(j < 5)
        {
            scanf("%d", &a[i][j]);
            if (a[i][j] == 1)
            {
                b[0] = i + 1;
                b[1] = j + 1;
            }
            j++;
        }
        i++;
    }
    int l = abs(3 - b[0])+ abs(3 - b[1]);
    printf("%d\n", l);

}