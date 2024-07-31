#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include<math.h>
#include <string.h>

int main()
{
    int a;
    scanf("%d", &a);
    char s[a];
    scanf("%s", s);
    int flag = 0;
    int l = 0;
    int i=0;
    while (s[i])
    {
        if(s[i] == s[i-1])
            l++;
        
        i++;
    }
    printf("%d", l);
}