#include <stdio.h>
#include <string.h>
int main ()
{
  int i , n , l , m;
  char t[100] ;
  char T[]="aAeEsS";
  printf("Texte:\n");
  fgets(t,100,stdin);
  t[strlen(t)-1]='\0';
  l=0;
  m=0;
  for (i=0;i<strlen(t);i++)
  { 
    if (t[i]==T[0] || t[i]==T[1])
      l++;
    if ((t[i]==T[2] || t[i]==T[3]) && (t[i+1]==T[4] ||t[i+1]==T[5]))
      m++;
  }
  printf("Le nombre d'apparition de a est %d\n",l);
  printf("Le nombre d'apparition de 'es' est %d\n",m);
  return 0;
}
