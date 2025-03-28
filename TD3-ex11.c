#include <stdio.h>
#include <string.h>
int main ()
{
  int i ;
  char t[50], T[2]="IT";
  printf("Phrase à decrypter:\n");
  fgets(t,sizeof(t),stdin);
  t[strlen(t)-1]='\t';
  for (i=0;i<strlen(t);i++)
  {
    if ( (t[i]==T[0] && t[i+1]==T[1]) || (t[i]==T[1] && t[i-1]==T[0]))
    {
      continue ;
    }
    printf("%c",t[i]);
  }
  return 0;
}
      
      
