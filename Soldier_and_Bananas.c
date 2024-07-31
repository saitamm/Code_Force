#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include<math.h>
#include <string.h>


int main()
{
    int k, n, w;

    scanf("%d %d %d", &k, &n, &w);

    int cost = k*w*(w+1)/2;
    int l = max(0, cost-n);
    printf("%d", l);
}