#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
void to_uppercase(char *str)
{
    for (int i = 0; str[i] != '\0'; i++)
    {
        str[i] = toupper(str[i]);
    }
}
int main()
{
    char a[100];
    char b[100];
    int i = 0;

    scanf("%s", a);
    scanf("%s", b);
    to_uppercase(a);
    to_uppercase(b);
    while (a[i])
    {
        if (a[i] < b[i])
        {
            printf("-1");
            break;
        }
        else if (a[i] > b[i])
        {
            printf("1");
            break;
        }
        i++;
    }
    if (i == strlen(a) && a[i -1] == b[i -1])
        printf("0");
}