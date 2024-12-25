#include <stdio.h>
#include <math.h>
#include <stdlib.h>
/**
 * Função que calcula a potencia de p mais próximo a n.
 * @param n valor inteiro
 * @param p valor da potencia
 * @return retorna o valor da potencia mais proxima.
 */
int next_power(int n, int p)
{
  int base = 1;
  int potencia_atual = pow(base, p);
  int potencia_anterior = potencia_atual;
  while (potencia_atual <= n)
  {
    base++;
    potencia_anterior = potencia_atual;
    potencia_atual = pow(base, p);
  }
  if (abs(potencia_atual - n) < abs(potencia_anterior - n))
  {
    return base;
  }
  else
  {
    return base - 1;
  }
};
 
int main()
{
  int n, p;
  scanf("%d%d", &n, &p);
 
  int base = 0;
  if (p == 0)
  {
    base = 1;
  }
  else if (p > 0)
  {
    base = next_power(n, p);
  }
  else
  {
    base = 1;
  }
 
  printf("%d -> %d^%d = %d\n", n, base, p, (int)pow(base, p));
  return 0;
}