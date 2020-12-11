#include<stdio.h>
#include<conio.h>
int main() {
  float PESO, IMC;
  int ALTURA;
  printf("Introduzca su peso en kilogramos: \n");
  scanf("%f", &PESO);
  printf("Introduzca su estatura en centimetros: \n");
  scanf("%d", &ALTURA);
  IMC = PESO / (ALTURA*ALTURA);
  printf("El IMC es de: %f\n", IMC);
  getch();
  return 0;
}
