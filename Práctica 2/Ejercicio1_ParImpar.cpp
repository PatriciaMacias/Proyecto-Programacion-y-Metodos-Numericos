#include <stdio.h>
#include <conio.h>
int num;
int main() {
  printf("Introduzca un numero que sea entero y positivo\n");
  scanf("%d",&num);
    if (num%2==0) {
    printf("El numero que introducio es par\n");
  }
  else {
      printf("El numero que introducio es impar\n");
  }
  getch();
  return 0;
}
