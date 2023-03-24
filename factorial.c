#include <stdio.h>

int main () {

  int numero, factorial = 1;

  printf ("Escribe el numero para su factorial: ");
  scanf ("%d", &numero);

  printf ("%d!=", numero);

  for (int i = numero; i > 1; i--)
    {
      printf ("%dx", i);
      factorial *= i;
    }
  printf ("1=%d", factorial);

  return 0;
}
