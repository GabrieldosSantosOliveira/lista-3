#include <stdio.h>
#include<inttypes.h>
void print_BYTE(unsigned char byte)
{
  int peso = 128;
  while (peso > 0)
  {
    printf("%d", byte / peso);
    byte %= peso;
    peso /= 2;
  }
}
/**
 * Imprime os bits dos n bytes endereçados por end_byte.
 * @param end_byte endereço do primeiro byte a ser impresso
 * @param quantidade de bytes a serem impressos
 */
void print_bytes(const void *end_byte, int n)
{
  int i;
  const char *k = end_byte;
  for (i = 0; i < n; i++)
  {
    print_BYTE(*(k + i));
    printf(" ");
  }
  printf("\n");
};
 
int main()
{
  double n;
  scanf("%lf", &n);
  unsigned char pc = n;
  unsigned short ps = n;
  unsigned int pi = n;
  float pf = n;
 
  print_bytes(&pc, sizeof(char));
  print_bytes(&ps, sizeof(unsigned short));
  print_bytes(&pi, sizeof(unsigned int));
  print_bytes(&pf, sizeof(float));
  print_bytes(&n, sizeof(double));
 
  return 0;
}