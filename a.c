#include<stdio.h>
int main(){

    int x = 5, y = 5;

    int a[x][y];

   for(int i = 0; i < 5; i++){
    for(int j = 0; j < 5; j++){
        a[i][j] = 2;
    }
   }
   for(int i = 0; i < 5; i++){
    for(int j = 0; j < 5; j++){
        printf("%d ", a[i][j]);
    }
    printf("\n");
   }


    return 0;
}