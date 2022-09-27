#include <stdio.h>
#include <stdlib.h>
#include "input.h"

int main()
{
    int m = 11, n = 22;

    char ** a = malloc(sizeof(char*) * m);

    for(int i = 0; i < m; i++){
        a[i] = malloc(n);
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == 0 || j == 0 || i == n - 1 || j == n - 1 || i == 10)
                a[i][j] = '*';
            else if (i == 5 && j == 5)
            {
                a[i][j] = 'P';
            }
            else if (i == 9 && j == 12)
            {
                a[i][j] = 'G';
            }
            else
                a[i][j] = 'x';
        }
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%c", a[i][j]);
        }
        printf("\n");
    }

    while (1)
    {
        printf("Enter 'D' to right \nEnter 'A' to left \nEnter 'w' to up \nEnter 's' to down \n");
        char c;
        scanf("%c", &c);

        map(m, n, a, c);
    }

    free(a);
    return 0;
}

