#include <stdio.h>
int main ()
{
  int n  ,  i , t[50] , x;
  printf("Donnez la taille du tableau");
  scanf("%d",&n);
  for (i=0;i<n;i++)
  {
    printf("t[%d]=",i);
    scanf("%d",&t[i]);
  }
  for (i=0;i<n;i++)
  {
    printf("%d\n",t[i]);
  }
  printf("Donnez le rang de l'element à supprimer(0-%d)",n-1);
  scanf("%d",&x);
  for (i=1;i<n;i++)
  {
    t[x]=t[x+1];
    x=x+1;
  }
  for (i=0;i<n-1;i++)
  {
    printf("%d\n",t[i]);
  }
  return 0;
}
  
