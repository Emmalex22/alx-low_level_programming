#include <stdlib.h>
#include <string.h>
#include <string.h>
#include <stdio.h>
char *argstostr(int ac, char **av)
{
    int i, n, r = 0, l = 0;
    char *str;    
if (ac == 0 || av == NULL)
        return (NULL);

    for (i = 0; i < ac; i++)
    {
        for (n = 0; av[i][n]; n++)
            l++;
    }
    l += ac;

    str = malloc(sizeof(char) * l + 1);
    if (str == NULL)
        return (NULL);
    for (i = 0; i < ac; i++)
    {
            n = 0;
    while (av[i][n] != '\0')
    {
        str[r] = av[i][n];
        r++;
        n++;
    }
    str[r++] = '\n';
    }
    str[r++] = '\0';

    return (str);
}
