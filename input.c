#include <stdio.h>
#include <stdlib.h>
char* map(int row, int col, char **a, char c){

    system("clear");

    if (c == 'd')
    {
      for (int i = 0; i < row; i++)
      {
        for (int j = 0; j < col; j++)
        {
          if (a[i][j] == 'P')
          {
            a[i][j] = ' ';
            j++;
            a[i][j] = 'P';
          }
        }
      }
    }

    else if (c == 'a')
    {
      for (int i = 0; i < row; i++)
      {
        for (int j = 0; j < col; j++)
        {
          if (a[i][j] == 'P')
          {
            a[i][j] = ' ';
            j--;
            a[i][j] = 'P';
          }
        }
      }
    }

    else if (c == 'w')
    {
      for (int i = 0; i < row; i++)
      {
        for (int j = 0; j < col; j++)
        {
          if (a[i][j] == 'P')
          {
            a[i][j] = ' ';
            i--;
            a[i][j] = 'P';
          }
        }
      }
    }

    else if (c == 's')
    {
      for (int i = 0; i < row; i++)
      {
        for (int j = 0; j < col; j++)
        {
          if (a[i][j] == 'P')
          {
            a[i][j] = ' ';
            i++;
            a[i][j] = 'P';
          }
        }
      }
    }
    else
    {
      printf("Incorrect key enterd\n");
    }

    for (int i = 0; i < row; i++)
    {
      for (int j = 0; j < col; j++)
      {
        printf("%c", a[i][j]);
      }
      printf("\n");
    }
  
    return *a;
}