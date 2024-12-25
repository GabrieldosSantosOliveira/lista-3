#include <stdio.h>
/**
 * Funcao que calcula o fatorial de um numero n
 * @param n um numero inteiro positivo
 * @return o fatorial de n
 */
unsigned long int fat(unsigned int n)
{
  unsigned long int k = 1;
  unsigned int i;
  for (i = n; i > 1; i--)
  {
    k *= i;
  }
  return k;
};
int main()
{
  unsigned int n;
  scanf("%u", &n);
  printf("%u! = %lu\n", n, fat(n));
  return 0;
}