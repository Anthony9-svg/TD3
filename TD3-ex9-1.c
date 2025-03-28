#include <stdio.h>
#include <string.h>
int main ()
{ 
  int i , n  ,a;
  char t[20], T[20];
  printf("Donnez le mot:");
  scanf("%s",t);
  if (strlen(t)%2==1)
  {
    printf("Le mot n'est pas carré\n");
  }
  else 
  {
    a=0;
    for (i=(strlen(t)/2);i<strlen(t);i++)
    {
     T[a]=t[i];
     a++;
    }
    a=strlen(t)/2;
    for (i=0;i<strlen(t)/2;i++)
    { 
      T[a]=t[i];
      a++;
    }
    n=strcmp(T,t);
    if (n==0)
      printf("Le mot est carré\n");
    else 
      printf("Le mot n'est pas carré\n");
  }
  return 0;
}
  
  
