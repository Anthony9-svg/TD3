#include <stdio.h>

int main()
 {
    int n , i , j  , temp , t[50];
    printf("Entrez le nombre d'éléments: ");
    scanf("%d", &n);
    printf("Entrez les nombres: \n");
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &t[i]);
    }

    for (int i = 0; i < n - 1; i++)
     {
        for (int j = 0; j < n - i - 1; j++)
         {
            if (t[j] > t[j + 1]) 
            {
                temp = t[j];
                t[j] = t[j + 1];
                t[j + 1] = temp;
            }
        }
    }

    printf("Valeurs triées: \n");
    for (int i = 0; i < n; i++)
     {
        printf("%d ", t[i]);
    }

    return 0;
}
