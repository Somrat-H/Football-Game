#include <stdio.h>
#include <stdlib.h>
int main()
{
    int m = 11, n = 22;
    char a[m][n];
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
    for (int i = 0; i < 11; i++)
    {
        for (int j = 0; j < 22; j++)
        {
            printf("%c", a[i][j]);
        }
        printf("\n");
    }

    

    while (1)
    {
        
        /* code */
    printf("Enter 'D' to right \nEnter 'A' to left \nEnter 'w' to up \nEnter 's' to down \n");
    char c ;
    scanf("%c", &c);
    
    system("clear");

    if(c == 'd'){
    for (int i = 0; i < 11; i++)
    {
        for (int j = 0; j < 22; j++)
        {   
          if(a[i][j] == 'P'){
            a[i][j] = ' ';
            j++;
            a[i][j] = 'P';
          }
           
        }
    }
    }
    

    else if(c == 'a'){
    for (int i = 0; i < 11; i++)
    {
        for (int j = 0; j < 22; j++)
        {   
          if(a[i][j] == 'P'){
            a[i][j] = ' ';
            j--;
            a[i][j] = 'P';
          }
           
        }
    }

    }
 
   

    else if(c == 'w'){
    for (int i = 0; i < 11; i++)
    {
        for (int j = 0; j < 22; j++)
        {   
          if(a[i][j] == 'P'){
            a[i][j] = ' ';
            i--;
            a[i][j] = 'P';
          }
           
        }
    }

    }
    

    else if(c == 's'){
    for (int i = 0; i < 11; i++)
    {
        for (int j = 0; j < 22; j++)
        {   
          if(a[i][j] == 'P'){
            a[i][j] = ' ';
            i++;
            a[i][j] = 'P';
          }
           
        }
    }
    }
    else {
    printf("Incorrect key enterd\n");
    }

    for (int i = 0; i < 11; i++)
    {
        for (int j = 0; j < 22; j++)
        {
            printf("%c", a[i][j]);
        }
        printf("\n");
    }
    }

    return 0;
}