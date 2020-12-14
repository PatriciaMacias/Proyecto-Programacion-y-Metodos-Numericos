#include <stdio.h>
#include <math.h>

float funcion_1(float x_in),funcion_2(float x_in), Error_Relativo(float va,float vn);
float biseccion(float a, float b), falsa1(float a, float b), falsa2(float a, float b);
float va, vn, a,b;
int i, metodo, iteraciones;

int main(){

    printf("¿Qué método desea? \n");
    printf("1.Método de bisección           2.Método de falsa posición\n");
    scanf("%d",&metodo);
    switch(metodo){
        case 1:
        printf("¿Con cuántas iteraciones desea trabajar? \n");
        scanf("%d",&iteraciones);
        printf("\n");
        a=-3;
        b=-2;
        vn=0;
        va=0;
        printf("(i)━━━━━━━━━━━━(xi)━━━━━━━━━━━━(a)━━━━━━━━━━━━(b)━━━━━━━━━━━━━━━(E)\n");
        for(i=1; i<=iteraciones; i++){
            printf("%d       %f      %f     %f      %f\n",i, biseccion(a,b),a,b,Error_Relativo(va,vn));
            if((funcion_1(a)*funcion_1(biseccion(a,b)))<0){
                b=biseccion(a,b);
                va=b;
                vn=biseccion(a,va);
            }
            else{
                a=biseccion(a,b);
                va=a;
                vn=biseccion(va,b);
            }
        }
        printf("\n");
        a=1;
        b=2;
        vn=0;
        va=0;
        printf("(i)━━━━━━━━━━━━(xi)━━━━━━━━━━━━(a)━━━━━━━━━━━━(b)━━━━━━━━━━━━(E)\n");
        for(i=1; i<=iteraciones; i++){
            printf("%d       %f      %f     %f    %f\n",i, biseccion(a,b),a,b,Error_Relativo(va,vn));
            if((funcion_2(a)*funcion_2(biseccion(a,b)))<0){
                b=biseccion(a,b);
                va=b;
                vn=biseccion(a,va);
            }
            else{
                a=biseccion(a,b);
                va=a;
                vn=biseccion(va,b);
            }
        }
        break;
        case 2:
        printf("¿Con cuántas iteraciones desea trabajar?\n");
        scanf("%d",&iteraciones);
        printf("\n");
        a=-3;
        b=-2;
        vn=0;
        va=0;
        printf("             ━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━Trigonométrica━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━\n");
        printf("i━━━━━━━━━━━━xi━━━━━━━━━━━━━━━━━━a━━━━━━━━━━━━━━━━━b━━━━━━━━━━━━━━━━━E━━━━━━━━━━━━━━━━━━━━━f(a)━━━━━━━━━━━━━━━━f(b)\n");
        for(i=1; i<=iteraciones; i++){
            printf("%d-      -%f-        -%f-       -%f-         -%f-      -%f-       -%f-    \n",i,falsa1(a,b),a,b,Error_Relativo(va,vn),funcion_1(a),funcion_1(b));
            if((funcion_1(a)*funcion_1(falsa1(a,b)))<0){
                b=falsa1(a,b);
                va=b;
                vn=falsa1(a,va);
            }
            else{
                a=falsa1(a,b);
                va=a;
                vn=falsa1(va,b);

            }
        }
        printf("\n");
        printf("\n");
        a=1;
        b=2;
        vn=0;
        va=0;
        printf("                        ━━━━━━━━━━━━━━━━━━━━━Logarítmica━━━━━━━━━━━━━━━━━━━━━━\n");
        printf("i━━━━━━━━━━━━━━xi━━━━━━━━━━━━━━━━━━━━a━━━━━━━━━━━━━━━━━b━━━━━━━━━━━━━━━━━━━E━━━━━━━━━━━━━━━━f(a)━━━━━━━━━━━━━━━f(b)\n");
        for(i=1; i<=iteraciones; i++){
        printf("%d-        -%f-         -%f-       -%f-        -%f-      -%f-      -%f-   \n",i,falsa2(a,b),a,b,Error_Relativo(va,vn),funcion_2(a),funcion_2(b));
        if((funcion_2(a)*funcion_2(falsa2(a,b)))<0){
            b=falsa2(a,b);
            va=b;
            vn=falsa2(a,va);
        }
        else{
            a=falsa2(a,b);
            va=a;
            vn=falsa2(va,b);

        }
        }
    }

return 0;
}

float funcion_1(float x_in){
    float fx;
    fx= (2*(x_in)*cos(2*x_in))-pow((x_in+1),2);
    return fx;
}
float biseccion (float a, float b){
    float xi;
    xi=((a+b)/2);
    return xi;
}
float funcion_2(float x_in){
    float fx;
    fx= log(fabs(x_in))+pow(x_in,2)-4;
    return fx;
}
float Error_Relativo(float va, float vn){
    float epsilon;
    epsilon= fabs((vn-va)/vn)*100;
    return epsilon;
}
float falsa1(float a, float b){
    float xi;
    xi=b-((funcion_1(b)*(a-b))/(funcion_1(a)-funcion_1(b)));
    return xi;
}
float falsa2(float a, float b){
    float xi;
    xi=b-((funcion_2(b)*(a-b))/(funcion_2(a)-funcion_2(b)));
    return xi;
}
