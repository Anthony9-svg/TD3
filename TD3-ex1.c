#include <stdio.h>
int main ()
{
  int n , i , t[50], a , T[50] , b;
  printf("Donnez la taille du tableau");
  scanf("%d",&n);
  for (i=0;i<n;i++)
  {
    printf("t[%d]=",i);
    scanf("%d",&t[i]);
  }
  a=0;
  b=0;
  for (i=0;i<n;i++)
  {
    if ((t[i]%2)==0)
    {
      t[a]=t[i];
      a=a+1;
    }
    else
    { 
      T[b]=t[i];
      b=b+1;
    }
  }  
  for (i=0;i<n;i++)
  {
    t[a]=T[i];
    a=a+1;
  }
  for (i=0;i<n;i++)
  {
    printf("%d\n",t[i]);
  }
  return 0;
}
      
