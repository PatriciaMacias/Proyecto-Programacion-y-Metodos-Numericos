#include <stdio.h>

int main()
{
    int c, cont, x=0, z=1, n;
    printf ("Inntroduzca la cantidad de numeros que desea imprimir : ");
    scanf("%d", &n);
    printf("0,");
    for(cont=0; cont<n-2; cont++){
        c=x+z;
        printf("%d",c);
        x=z;
        z=c;
    }
    printf("\n");
    return 0;

}
