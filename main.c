#include <stdio.h>

int main(void) {
  int valor;

  printf("Informe o valor de 1 a 7: \n");

  scanf("%d", &valor);
  switch(valor){
    case 1:
    printf("Domingo\n");
    break;

    case 2:
    printf("Segunda\n");
    break;

    case 3:
    printf("Terça\n");
    break;
    
    case 4:
    printf("Quarta\n");
    break;

    case 5:
    printf("Quinta\n");
    break;

    case 6:
    printf("Sexta\n");
    break;

    case 7:
    printf("Sábado\n");
    break;

    default:
    printf("Valor inválido");
    
  }
  return 0;
}