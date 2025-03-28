#include <stdio.h>
#include <string.h>
int main()
{
	char t[20] , x[20];
	int i , n;
	printf("Donnez le mot\n");
	fgets(t,20,stdin);
	t[strcspn(t, "\n")] = '\0';
	n=strlen(t);
	for (i=0;i<n;i++)
	{
	    x[i]=t[n-1-i];
	}
	x[n]='\0';
	int res=strcmp(t,x);
	if (res==0)
	{
	    printf("le mot est palindrome %d");
	} 
	return 0;
}