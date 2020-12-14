#include <stdio.h>
#include <conio.h>
int main() {
  int n2=0,a,z, numero ;
  int binario[100];
  binario[0]=0;

  printf("Introduzca un numero que sea entero:\n");
  scanf("%d", &numero);

  for (a=0; a<100; a++) {
    binario[a]=numero%2;
    numero=numero/2;
    if (numero==0)
    break;
  }

  for (z=a; z>=0; z--) {
    printf("%d", binario[z]);
  }

  getch();
  return 0;
}
