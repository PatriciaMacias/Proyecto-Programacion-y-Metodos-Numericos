#include <stdio.h>
#include <math.h>
int main()
{
    int A,B,C,D;
    float X,Y;

    printf("Introduzca el coeficiente a: ");
    scanf("%d",&A);

    while (A == 0) {
        printf("Introduzca el coeficiente a: ");
        scanf("%d",&A);
    }

    printf("Introduzca el coeficiente b: ");
    scanf("%d",&B);
    printf("Introduzca el coeficiente c: ");
    scanf("%d",&C);

    D = B*B-4*A*C;
    if (D > 0) {
        X = (-B+sqrt(D))/(2*A);
        Y = (-B-sqrt(D))/(2*A);
        printf("x1 = %.2f\n",X);
        printf("x2 = %.2f\n",Y);
    }
    else if (D == 0) {
        X = (-B)/(2*A);
        printf("x1 = %.2f\n",X);
    }
    else
        printf("Error, las soluciones no son reales");
    return 0;
}
