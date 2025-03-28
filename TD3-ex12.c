#include <stdio.h>
int main ()
{
  int i , n ,  j , t[50][50] , sum  , e[10][10];
  printf("Donnez la taille du carré");
  scanf("%d",&n);
  printf("Donnez les composants du carré\n");
  for (i=0;i<n;i++)
  {
    for (j=0;j<n;j++)
    {
      printf("t[%d][%d]=",i,j);
      scanf("%d",&t[i][j]);
      printf("\n");
    }
  }  

