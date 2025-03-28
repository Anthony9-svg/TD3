#include <stdio.h>
int main ()
{
    int i ,n, tab[100][100],x,j;
    printf("Donnez le rang");
    scanf("%d",&n);
    x=1;
    for(i=0;i<n;i++)
    {
        for(j=x;j<n;j++)
        { 
        tab[i][j]=0;
        }
        x=x+1;
    }
    for(i=0;i<n;i++)
     {
           tab[i][0]=1;
     }
     for (i=1;i<n;i++)
     {
         for(j=1;j<n;j++)
         {
             tab[i][j]=tab[i-1][j] + tab[i-1][j-1];
         }
     }
       for (i=0;i<n;i++)
     {
         for(j=0;j<n;j++)
         {
             if(tab[i][j]!=0)
           {
             printf("%d\t",tab[i][j]);
           }
         }
         printf("\n");
     }
     return 0;
}
     
    

        
        
      
      
        
       