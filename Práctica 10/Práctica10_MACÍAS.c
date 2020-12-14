#include<math.h>
#include <stdio.h>

float derivadaDELANTE_1(float h, float (xi));
float derivadaATRAS_1(float h, float(xi));
float derivadaCENTRADA_1(float h, float (xi));
float derivadaDELANTE_2(float h, float (xi));
float derivadaATRAS_2(float h, float(xi));
float derivadaCENTRADA_2(float h, float (xi));
float derivadaDELANTE_3(float h, float (xi));
float derivadaATRAS_3(float h, float(xi));
float derivadaCENTRADA_3(float h, float (xi));
float derivadaDELANTE_4(float h, float (xi));
float derivadaATRAS_4(float h, float(xi));
float derivadaCENTRADA_4(float h, float (xi));
float error(float (xi), float h);

int main()
{
    int opcion;
    printf("Introduzca la aproximacion de h que desea evaluar\n");
    printf("1.h=0.5\n2.h=0.2\n3.h=0.1\n4.h=0.01\n");
    scanf("%d",&opcion);
    float h,xi,error;

    switch(opcion)
    {
        case 1:
        printf("El resultado hacia ADELANTE es: %f ",derivadaDELANTE_1(xi,h));
        error=fabs((0.2489-derivadaDELANTE_1(xi,h))/0.2489)*100;
        printf("\nEl error es= %f ",error);
        printf("\nEl resultado CENTRADA es: %f ",derivadaCENTRADA_1(xi,h));
        error=fabs((0.2489-derivadaCENTRADA_1(xi,h))/0.2489)*100;
        printf("\nEl error es= %f ",error);
        printf("\nEl resultado hacia ATRAS es: %f ",derivadaATRAS_1(xi,h));
        error=fabs((0.2489-derivadaATRAS_1(xi,h))/0.2489)*100;
        printf("\nEl error es= %f ",error);
        break;
        case 2:
        printf("\nEl resultado hacia ADELANTE es: %f ",derivadaDELANTE_2(xi,h));
        error=fabs((0.2489-derivadaDELANTE_2(xi,h))/0.2489)*100;
        printf("\nEl error es= %f ",error);
        printf("\nEl resultado CENTRADA es:%f ",derivadaCENTRADA_2(xi,h));
        error=fabs((0.2489-derivadaCENTRADA_2(xi,h))/0.2489)*100;
        printf("\nEl error es= %f ",error);
        printf("\nEl resultado hacia ATRAS es: %f ",derivadaATRAS_2(xi,h));
        error=fabs((0.2489-derivadaATRAS_2(xi,h))/0.2489)*100;
        printf("\nEl error es= %f ",error);
        break;
        case 3:
        printf("\nEl resultado hacia ADELANTE es: %f ",derivadaDELANTE_3(xi,h));
        error=fabs((0.2489-derivadaDELANTE_3(xi,h))/0.2489)*100;
        printf("\nEl error es= %f ",error);
        printf("\nEl resultado CENTRADA es:%f ",derivadaCENTRADA_3(xi,h));
        error=fabs((0.2489-derivadaCENTRADA_3(xi,h))/0.2489)*100;
        printf("\nEl error es= %f ",error);
        printf("\nEl resultado hacia ATRÁS es: %f ",derivadaATRAS_3(xi,h));
        error=fabs((0.2489-derivadaATRAS_3(xi,h))/0.2489)*100;
        printf("\nEl error es= %f ",error);
        break;
        case 4:
        printf("\nEl resultado hacia ADELANTE es: %f ",derivadaDELANTE_4(xi,h));
        error=fabs((0.2489-derivadaDELANTE_4(xi,h))/0.2489)*100;
        printf("\nEl error es= %f ",error);
        printf("\nEl resultado CENTRADA es:%f ",derivadaCENTRADA_4(xi,h));
        error=fabs((0.2489-derivadaCENTRADA_4(xi,h))/0.2489)*100;
        printf("\nEl error es= %f ",error);
        printf("\nEl resultado hacia ATRAS es: %f ",derivadaATRAS_4(xi,h));
        error=fabs((0.2489-derivadaATRAS_4(xi,h))/0.2489)*100;
        printf("\nEl error es= %f ",error);
        break;
    }
}
float derivadaDELANTE_1(float h, float (xi)){
    float fxi, aproximacion_1, aproximacion_2,derivada;
    xi=0.6;
    h=0.5;
    fxi=1-exp(-xi/0.2);
    aproximacion_1=1-exp(-(xi+h)/0.2);
    aproximacion_2=1-exp(-(xi+(2*h))/0.2);
    derivada=(-aproximacion_2+4*aproximacion_1-3*fxi)/(2*h);
    return derivada;

}
float derivadaATRAS_1(float h, float (xi)){
    float fxi, aproximacion_1, aproximacion_2,derivada;
    xi=0.6;
    h=0.5;
    fxi = 1-exp(-xi/0.2);
    aproximacion_1 = 1-exp(-(xi-h)/0.2);
    aproximacion_2 = 1-exp(-(xi-(2*h))/0.2);
    derivada= (3*fxi-4*aproximacion_1+aproximacion_2)/(2*h);
    return derivada;

}
float derivadaCENTRADA_1(float h, float (xi)){
    float fxi, aproximacion_1, aproximacion_2,derivada, aproximacion_3, aproximacion_4;
    xi=0.6;
    h=0.5;
    fxi = 1-exp(-xi/0.2);
    aproximacion_1 = 1-exp(-(xi+h)/0.2);
    aproximacion_2 = 1-exp(-(xi+(2*h))/0.2);
    aproximacion_3= 1-exp(-(xi-h)/0.2);
    aproximacion_4 = 1-exp(-(xi-(2*h))/0.2);
    derivada = (-aproximacion_2+8*aproximacion_1-8*aproximacion_3+aproximacion_4)/(12*h);
    return derivada;
}
float derivadaDELANTE_2(float h, float (xi)){
    float fxi, aproximacion_1, aproximacion_2,derivada;
    xi=0.6;
    h=0.2;
    fxi=1-exp(-xi/0.2);
    aproximacion_1=1-exp(-(xi+h)/0.2);
    aproximacion_2=1-exp(-(xi+(2*h))/0.2);
    derivada=(-aproximacion_2+4*aproximacion_1-3*fxi)/(2*h);
    return derivada;

}
float derivadaATRAS_2(float h, float (xi)){
    float fxi, aproximacion_1, aproximacion_2,derivada;
    xi=0.6;
    h=0.2;
    fxi = 1-exp(-xi/0.2);
    aproximacion_1 = 1-exp(-(xi-h)/0.2);
    aproximacion_2 = 1-exp(-(xi-(2*h))/0.2);
    derivada= (3*fxi-4*aproximacion_1+aproximacion_2)/(2*h);
    return derivada;

}
float derivadaCENTRADA_2(float h, float (xi)){
    float fxi, aproximacion_1, aproximacion_2,derivada, aproximacion_3, aproximacion_4;
    xi=0.6;
    h=0.2;
    fxi = 1-exp(-xi/0.2);
    aproximacion_1 = 1-exp(-(xi+h)/0.2);
    aproximacion_2 = 1-exp(-(xi+(2*h))/0.2);
    aproximacion_3= 1-exp(-(xi-h)/0.2);
    aproximacion_4 = 1-exp(-(xi-(2*h))/0.2);
    derivada = (-aproximacion_2+8*aproximacion_1-8*aproximacion_3+aproximacion_4)/(12*h);
    return derivada;
}
float derivadaDELANTE_3(float h, float (xi)){
    float fxi, aproximacion_1, aproximacion_2,derivada;
    xi=0.6;
    h=0.1;
    fxi=1-exp(-xi/0.2);
    aproximacion_1=1-exp(-(xi+h)/0.2);
    aproximacion_2=1-exp(-(xi+(2*h))/0.2);
    derivada=(-aproximacion_2+4*aproximacion_1-3*fxi)/(2*h);
    return derivada;

}
float derivadaATRAS_3(float h, float (xi)){
    float fxi, aproximacion_1, aproximacion_2,derivada;
    xi=0.6;
    h=0.1;
    fxi = 1-exp(-xi/0.2);
    aproximacion_1 = 1-exp(-(xi-h)/0.2);
    aproximacion_2 = 1-exp(-(xi-(2*h))/0.2);
    derivada= (3*fxi-4*aproximacion_1+aproximacion_2)/(2*h);
    return derivada;

}
float derivadaCENTRADA_3(float h, float (xi)){
    float fxi, aproximacion_1, aproximacion_2,derivada, aproximacion_3, aproximacion_4;
    xi=0.6;
    h=0.1;
    fxi = 1-exp(-xi/0.2);
    aproximacion_1 = 1-exp(-(xi+h)/0.2);
    aproximacion_2 = 1-exp(-(xi+(2*h))/0.2);
    aproximacion_3= 1-exp(-(xi-h)/0.2);
    aproximacion_4 = 1-exp(-(xi-(2*h))/0.2);
    derivada = (-aproximacion_2+8*aproximacion_1-8*aproximacion_3+aproximacion_4)/(12*h);
    return derivada;
}
float derivadaDELANTE_4(float h, float (xi)){
    float fxi, aproximacion_1, aproximacion_2,derivada;
    xi=0.6;
    h=0.01;
    fxi=1-exp(-xi/0.2);
    aproximacion_1=1-exp(-(xi+h)/0.2);
    aproximacion_2=1-exp(-(xi+(2*h))/0.2);
    derivada = (-aproximacion_2+4*aproximacion_1-3*fxi)/(2*h);
    return derivada;

}
float derivadaATRAS_4(float h, float (xi)){
    float fxi, aproximacion_1, aproximacion_2,derivada;
    xi=0.6;
    h=0.01;
    fxi = 1-exp(-xi/0.2);
    aproximacion_1 = 1-exp(-(xi-h)/0.2);
    aproximacion_2 = 1-exp(-(xi-(2*h))/0.2);
    derivada= (3*fxi-4*aproximacion_1+aproximacion_2)/(2*h);
    return derivada;

}
float derivadaCENTRADA_4(float h, float (xi)){
    float fxi, aproximacion_1, aproximacion_2,derivada, aproximacion_3, aproximacion_4;
    xi=0.6;
    h=0.01;
    fxi = 1-exp(-xi/0.2);
    aproximacion_1 = 1-exp(-(xi+h)/0.2);
    aproximacion_2 = 1-exp(-(xi+(2*h))/0.2);
    aproximacion_3= 1-exp(-(xi-h)/0.2);
    aproximacion_4 = 1-exp(-(xi-(2*h))/0.2);
    derivada = (-aproximacion_2+8*aproximacion_1-8*aproximacion_3+aproximacion_4)/(12*h);
    return derivada;
}
