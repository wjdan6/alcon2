#include<stdio.h>
int main()
{
    int line = 1, c = 0, x, a, b, i;
    scanf("%d", &x);
    while (c < x)
    {
        c += line++;
    }
    line = line - 1;
    if (line % 2 == 0)
    {
        a = line;
        b = 1;
        for (i = 1; i <= c - x; i++)
        {
            a--;
            b++;
        }
    }
    if (line % 2 == 1)
    {
        a = 1;
        b = line;
        for (i = 1; i <= c - x; i++)
        {
            a++;
            b--;
        }
    }
    printf("%d/%d", a, b);
}