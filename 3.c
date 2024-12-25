#include <stdio.h>
 
void separaDigitos(int numero, int *primeiro, int *segundo, int *terceiro)
{
  *primeiro = numero / 100;
  *segundo = (numero % 100 - (numero % 10)) / 10;
  *terceiro = numero % 10;
}
int main()
{
  int n, primeiro_digito, segundo_digito, terceiro_digito;
  scanf("%d", &n);
  separaDigitos(n, &primeiro_digito, &segundo_digito, &terceiro_digito);
  int inverso = (terceiro_digito * 100) + (segundo_digito * 10) + primeiro_digito;
  printf("%d\n", inverso);
  return 0;
}