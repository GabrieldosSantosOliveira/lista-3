#include <math.h>
#include <stdio.h>
 
unsigned int raizesEq2Grau(double a, double b, double c, double *x1, double *x2)
{
  double delta = pow(b, 2) - (4 * a * c);
  if (delta < 0)
  {
    *x1 = 0;
    *x2 = 0;
    return 0;
  }
 
  if (delta > 0)
  {
    *x1 = ((-b) + sqrt(delta)) / (2 * a);
    *x2 = ((-b) - sqrt(delta)) / (2 * a);
    if (*x2 < *x1)
    {
      double tmp = *x1;
      *x1 = *x2;
      *x2 = tmp;
    }
    return 2;
  }
  if (delta == 0)
  {
    *x1 = ((-b) + sqrt(delta)) / (2 * a);
    return 1;
  }
}
 
int main()
{
  double x1, x2, a, b, c;
  scanf("%lf%lf%lf", &a, &b, &c);
  unsigned int raizes = raizesEq2Grau(a, b, c, &x1, &x2);
  if (raizes == 0)
  {
    printf("RAIZES IMAGINARIAS\n");
  }
  else if (raizes == 1)
  {
    printf("RAIZ UNICA\n");
    printf("X1 = %.2lf\n", x1);
  }
  else
  {
    printf("RAIZES DISTINTAS\n");
    printf("X1 = %.2lf\n", x1);
    printf("X2 = %.2lf\n", x2);
  }
  return 0;
}