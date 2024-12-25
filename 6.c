#include <stdio.h>
/**
 * Função que calcula a raiz quadrada de n.
 * @param n um numero real qualquer
 * @param p precisão do cálculos
 * @return a raiz quadrada de n
 */
double raiz(double n, double p)
{
  return (p + (n / p)) / 2;
};
 
/**
 * Valor absoluto de um numero qualquer
 * @param n um número real qualquer
 * @return o valor absoluto de n
 */
double absoluto(double n)
{
  if (n < 0)
  {
    return n * -1;
  }
  return n;
};
 
int main()
{
  double n, erro, margem_de_erro, r;
  scanf("%lf%lf", &n, &erro);
  r = raiz(n, 1);
  margem_de_erro = absoluto(n - (r * r));
  printf("r: %.9lf, err: %.9lf\n", r, margem_de_erro);
  while (margem_de_erro > erro)
  {
    r = raiz(n, r);
    margem_de_erro = absoluto(n - (r * r));
    printf("r: %.9lf, err: %.9lf\n", r, margem_de_erro);
  }
  return 0;
}