#include <stdio.h>
int main ()
{
  int i  , n  , m , j  ,t1[50],t2[100] ,a, temp ;
  printf("Donnez la taille de t1\n");
  scanf("%d",&m);
  printf("Donnez les elements de t1\n");
  for (i=0;i<m ;i++)
  { 
    printf("t1[%d]=",i);
    scanf("%d",&t1[i]);
  }
  printf("Donnez la taille de t2\n");
  scanf("%d",&n);
  printf("Donnez les elements de t2\n");
  for (i=0;i<n ;i++)
  { 
    printf("t2[%d]=",i);
    scanf("%d",&t2[i]);
  }
  l=0;
  for (i=0;i<m;i++)
  {
    for (j=0;j<n;j++)
    {
      if (t2[j]==t1[i])     
      { 
        a=i;
        l++;
        do
        {
         temp=t1[a+1];
         t1[a+1]=t1[a];
         t1[a]=temp;
         a++;
        }
        while (a<m-i);
      }
    }
  }
  printf("%d\n");
  for (i=0;i<m;i++)
    {
        printf("t1[%d]=%d\n",i,t1[i]);
    }
  return 0;
}
