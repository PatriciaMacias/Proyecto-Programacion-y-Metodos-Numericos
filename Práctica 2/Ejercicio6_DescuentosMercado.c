#include <stdio.h>
#include <conio.h>
int main() {
  int opc;
  float IMPORTE, DSCTO, TOTAL;
  printf("Escriba el departamento en el que desea realizar su compra : \n 1.Perfumeria \n 2.Salchichoneria\n 3.Carniceria\n 4.Limpieza\n" );
  scanf("%d", &opc);
  switch (opc) {
    case 1: printf("Introduzca el importe del articulo: \n");
    scanf("%f", &IMPORTE);
    DSCTO=(IMPORTE*.20);
    TOTAL = (IMPORTE-DSCTO+.10);
    printf("El total a pagar es: %f \n", TOTAL);
    break;
    case 2: printf("Introduzca el importe del articulo: \n");
    scanf("%f", &IMPORTE);
    DSCTO=(IMPORTE*.40);
    TOTAL = (IMPORTE-DSCTO+.10);
    printf("El total a pagar es: %f \n", TOTAL);
    break;
    case 3: printf("Indtroduzca el importe del articulo: \n");
    scanf("%f", &IMPORTE);
    DSCTO=(IMPORTE*.20);
    TOTAL = (IMPORTE-DSCTO+.10);
    printf("El total a pagar es de : %f \n", TOTAL);
    break;
    case 4: printf("Introduzca el importe del articulo: \n");
    scanf("%f", &IMPORTE);
    DSCTO=(IMPORTE*.35);
    TOTAL = (IMPORTE-DSCTO+.10);
    printf("El total a pagar es de : %f \n", TOTAL);
  }
  return 0;
}
