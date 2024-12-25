#include <stdio.h>
#include <stdbool.h>
/**
 * Função que calcula o valor de pi usando a série proposta por John Wallis
 * @param n quantidade de termos da série
 * @return o valor aproximado da constante pi
 */
double compute_pi(int n)
{
  int i;
  double impar = 1;
  double par = 2;
  double k = 1;
  bool incrementou = false;
  for (i = 0; i < n; i++)
  {
    k = k * (par / impar);
    if (incrementou == false)
    {
      incrementou = true;
      impar += 2;
    }
    else if (incrementou == true)
    {
      incrementou = false;
      par += 2;
    }
  }
 
  return k * 2;
};
 
int main()
{
  int n;
  scanf("%d", &n);
  printf("%.12lf\n", compute_pi(n));
  return 0;
}