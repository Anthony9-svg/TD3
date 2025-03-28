#include <stdio.h>
#include <string.h>
int main ()
{
    int i , n ,m;
    char t[50] ,T[3];
    printf("Donnez la phrase :\t");
    fgets( t, 50, stdin);
    t[strlen(t)-1]='\0';
    printf("Donnez le bigramme:\t");
    scanf("%s",T);
    m=0;
    for (i=0;i<strlen(t)-1;i++)
    {
        if (t[i]==T[0] && t[i+1]==T[1])
            {
                m=m+1;
            }
    }
    printf("Le nombre d'occurence de ce bigramme est %d",m);
    return 0;
}