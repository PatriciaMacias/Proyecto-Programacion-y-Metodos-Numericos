#include <stdio.h>
#include<math.h>
float A[3][3] = {{10,2,-1},{-3,-6,2},{1,1,5}}; 
float b[3] = {27,-61.5,-21.5}; 
float xinicial1,xinicial2,xinicial3;
float x_iteracion1,x_iteracion2,x_iteracion3; 
float ERRORa1,ERRORa2,ERRORa3;
int i,j;
int main()
{
 // --------Método de Gauss Seidel-------
for(j=0;j<5;j++){
    if(j==0){ 
        x_iteracion1 = b[0]/A[0][0];
        x_iteracion2 = ((-A[1][0]*x_iteracion1)+b[1])/A[1][1];
        x_iteracion3 = ((-A[2][0]*x_iteracion1)-(A[2][1]*x_iteracion2)+b[2])/A[2][2];
        printf("Metodo de Gaus Seidel\n" );
        printf("x1 en la iteracion 1 es = %f\n",x_iteracion1);
        printf("x2 en la iteracion 1 es = %f\n",x_iteracion2);
        printf("x3 en la iteracion 1 es =  %f\n",x_iteracion3);
    }

    else {
        xinicial1 = x_iteracion1;
        x_iteracion1 = ((-A[0][1]*x_iteracion2)-(A[0][2]*x_iteracion3)+b[0])/A[0][0];
        ERRORa1=fabs((x_iteracion1-xinicial1)/(x_iteracion1))*100;
        xinicial2 = x_iteracion2;
        x_iteracion2 = ((-A[1][0]*x_iteracion1)-(A[1][2]*x_iteracion3)+b[1])/A[1][1];
        ERRORa2=fabs((x_iteracion2-xinicial2)/(x_iteracion2))*100;
        xinicial3 = x_iteracion3;
        x_iteracion3 = ((-A[2][0]*x_iteracion1)-(A[2][1]*x_iteracion2)+b[2])/A[2][2];
        ERRORa3=fabs((x_iteracion3-xinicial3)/(x_iteracion3))*100;
        printf("x1 en la iteracion %d es = a %f, su error es= %f %%\n",j+1,x_iteracion1,ERRORa1);
        printf("x2 en la iteracion %d es = a %f, su error es= %f %%\n",j+1,x_iteracion2,ERRORa2);
        printf("x3 en la iteracion %d es = a %f, su error es= %f %%\n",j+1,x_iteracion3,ERRORa3);
        }
    }
}