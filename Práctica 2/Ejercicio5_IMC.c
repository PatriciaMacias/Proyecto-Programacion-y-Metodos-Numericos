#include <stdlib.h>
#include <stdio.h>
int main()
{
 float altura;
 float peso;
 float IMC;

    printf("Introduzca su altura en metros: ");
    scanf("%f", & altura);

    printf("Introduzca su peso en kilogramos: ");
    scanf("%f", & peso);

    IMC = peso/(altura*altura);

    printf("Tu IMC es de:%f ", IMC );

    if (IMC<18.5)
        printf("\n Su peso se encuentra en el rango bajo");
        else
     if (18.5<=IMC&&IMC<=24.9)
        printf("\n Su peso se encuentra en el rango normal");
        else
     if (25<=IMC&&IMC<=29.9)
        printf("\n Su peso se encuentra en el rango de sobrepeso");
        else
     if (30<=IMC&&IMC<=34.5)
        printf("\n Usted padece obesidad tipo 1");
        else
     if (35<=IMC&&IMC<=39.9)
        printf("\n Usted padece obesidad tipo 2");
        else
     if (IMC>=40)
        printf("\n Usted padece hiperobesidad");

return 0;

}
