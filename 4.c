#include <stdio.h>
int somaDivisores(int k)
{
  int i;
  int soma = 1;
  for (i = 2; i <= k / 2; i++)
  {
    if (k % i == 0)
    {
      soma += i;
    }
  }
  return soma;
};
void mostrar(int k)
{
  int i;
  int n = somaDivisores(k);
  int soma = 0;
  for (i = 1; i <= k / 2; i++)
  {
    if (k % i == 0)
    {
 
      soma += i;
      if (soma == n)
      {
        printf(" %d ", i);
      }
      else
      {
        printf(" %d +", i);
      }
    }
  }
}
int main()
{
  int k;
  scanf("%d", &k);
  printf("%d =", k);
  mostrar(k);
  int j = somaDivisores(k);
  printf("= %d", j);
  if (k == j)
  {
    printf(" (NUMERO PERFEITO)\n");
  }
  else
  {
    printf(" (NUMERO NAO E PERFEITO)\n");
  }
  return 0;
}