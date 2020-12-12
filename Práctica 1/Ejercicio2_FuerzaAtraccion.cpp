#include<stdio.h>
#include<conio.h>
int main() {
  float W, MASA;
  float G = 9.8;
    printf("Introduzca el peso: \n");
    scanf("%f", &MASA);
    W=MASA*G;
    printf("La fuerza de atraccion es: %f\n", W);
  getch();
  return 0;
}
