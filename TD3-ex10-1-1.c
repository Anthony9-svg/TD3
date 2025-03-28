#include <stdio.h>
#include <string.h>
int main ()
{
  int i , k ,o, n;
  char t[50],T[]="aeiouy",I[3]="IT",p[50],c[]="bcdfghjklmnpqrstvwxz";
  printf("Phrase à crypter:");
  fgets(t,50,stdin);
  t[strlen(t)-1]='\0';
  n=strlen(t);
  printf("%d\n",n);
  o=0;
  for (i=0;i<strlen(t);i++)
  {
    printf("%c",t[i]);
    if ((t[i]!=T[0] && t[i]!=T[1] && t[i]!=T[2] && t[i]!=T[3] && t[i]!=T[4] && t[i]!=T[5] && t[i]!='\t' ) && (t[i+1]!=c[0] && t[i+1]!=c[1] && t[i+1]!=c[2] && t[i+1]!=c[3] && t[i+1]!=c[4] && t[i+1]!=c[5] && t[i+1]!='\0' && t[i+1]!=c[6] && t[i+1]!=c[7] && t[i+1]!=c[8] && t[i+1]!=c[9] && t[i+1]!=c[10] && t[i+1]!=c[11] && t[i+1]!=c[12] && t[i+1]!=c[13] && t[i+1]!=c[14] && t[i+1]!=c[15] && t[i+1]!=c[16] && t[i+1]!=c[17] && t[i+1]!=c[18] && t[i+1]!=c[19]))
      printf("IT");
  }
  return 0;
}
    
