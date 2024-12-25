#include <stdio.h>
void converteEmNotasMoedas(int dinheiro, int *nota_100, int *nota_50, int *nota_10, int *nota_1)
{
  *nota_100 = 0;
  *nota_50 = 0;
  *nota_10 = 0;
  *nota_1 = 0;
  while (dinheiro >= 100)
  {
    dinheiro -= 100;
    *nota_100 = *nota_100 + 1;
  }
  while (dinheiro >= 50)
  {
    dinheiro -= 50;
    *nota_50 = *nota_50 + 1;
  }
  while (dinheiro >= 10)
  {
    dinheiro -= 10;
    *nota_10 =  *nota_10 + 1;
  }
  while (dinheiro >= 1)
  {
    dinheiro -= 1;
    *nota_1 = *nota_1 + 1;
  }
}
 
int main()
{
  int dinheiro, nota_100, nota_50, nota_10, nota_1;
  scanf("%d", &dinheiro);
  converteEmNotasMoedas(dinheiro, &nota_100, &nota_50, &nota_10, &nota_1);
  printf("NOTAS DE 100 = %d\n", nota_100);
  printf("NOTAS DE 50 = %d\n", nota_50);
  printf("NOTAS DE 10 = %d\n", nota_10);
  printf("MOEDAS DE 1 = %d\n", nota_1);
 
  return 0;
}