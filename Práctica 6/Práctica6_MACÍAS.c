#include <stdio.h> 
#include <math.h> 
float ERROR_absoluto(float x1,float x0) 
{     
float ERROR_aprox;          
ERROR_aprox= (x1-x0)/x1;          
if (ERROR_aprox<0)       ERROR_aprox=-ERROR_aprox;            
return ERROR_aprox*100; 
}  
 float DerivadaF1(float x) 
{     
return -8*sin(x)*exp(-x)+8*cos(x)*exp(-x); }  
float Funcion2(float x) 
{   
return 2*x*x*x -11*x*x+17.7*x-5; 
}  
float DerivadaF2(float x) 
{     
return 6*x*x-22*x+17.7; 
}  
float Funcion1(float x) 
{      
return 8*sin(x)*exp(-x)-1; 
} 
void Metodo_NewtonRaphson() 
{     
float x0,x1;     
int i=0,imax;     
float ERROR_aprox=100;     
float error;          
printf("Introduzca el valor de x0: ");     
scanf("%f",&x0);    //0     
printf("Introduzca el valor del error: ");     
scanf("%f",&error);   //0.001     
printf("Introduzca el valor de las iteraciones: ");     
scanf("%d",&imax);      //10               
printf(" i   ┃    xi     ┃     ERROR Aproximado\n");  
printf("━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━\n");
printf(" %d     %f \n",i,x0);          
while  ((ERROR_aprox>error)&&(i<imax))     
{         
x1=x0-Funcion2(x0)/DerivadaF2(x0);   //Metodo de NewtonRaphson                  
ERROR_aprox=ERROR_absoluto(x1,x0);         
i=i+1;         
printf(" %d       %f      %f \n",i,x1,ERROR_aprox);               x0=x1;             
 }         
  }  
void Metodo_Secante() 
{     
float x0,x1,x2;     
float error,ERROR_aprox=100;     
int imax,i=0;     
float df;          
printf("\n");
printf("Introduzca el valor de x0:  ");     
scanf("%f",&x0);      
printf("Introduzca el valor de x1:  ");     
scanf("%f",&x1);      
printf("El valor del error es= ");    
scanf("%f",&error);      
printf("Introduzca el valor maximo de iteraciones: ");     
scanf("%d",&imax); 
printf("\n");
printf("i  ┃  xi   ┃   xi+1    ┃   f'(xi)  ┃   ERROR_aprox\n"); 
printf("━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━\n");
printf("%d %f  %f   \n",0,x0,x1);               
while ((ERROR_aprox>error)&&(i<imax))      
{          
df= (Funcion2(x0)-Funcion2(x1))/(x0-x1);                   
x2=x1-Funcion2(x1)*(x0-x1)/(Funcion2(x0)-Funcion2(x1));   //Metodo de la Secante                 
ERROR_aprox=ERROR_absoluto(x2,x1);         
i=i+1;       
printf("%d %f  %f   %f  %f \n",i,x1,x2,df,ERROR_aprox);                  x0=x1;         
x1=x2;      
}      
}  
int main() 
{    
Metodo_NewtonRaphson(); 
Metodo_Secante();      
return 0; 
}