#include<stdio.h>
/**
 * Retorna o n-ésimo termo da sequência de Fibonacci
 * @param t1 primeiro termo da sequência
 * @param t2 segundo termo da sequência
 * @param n a posição do termo desejado da sequência
 * @return o valor do n-ésimo termo da sequência
 */
int fibonacci(int t1, int t2, int n)
{
  if (n == 1)
  {
    return t1;
  }
  else if (n == 2)
  {
    return t2;
  }
  int i;
  int k;
  for(i = 2; i < n; i++){
    k = t1 + t2;
    t1 = t2;
    t2 = k; 
  }
  return k;
};
int main(){
  int t1, t2, n;
  scanf("%d%d%d", &t1, &t2, &n);
 
  printf("%d\n", fibonacci(t1, t2, n));
  return 0;
}