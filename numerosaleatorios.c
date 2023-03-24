#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () {

  int numeroaleatorio, numerosporgenerar;

    srand (time (0));
  numeroaleatorio = rand () % (20 - 5) + 5;

  printf ("Generando %d numeros\n", numeroaleatorio);

  for (int i = 0; i <= numeroaleatorio; i++)
    {
      numerosporgenerar = rand () % (30 - 1) + 1;
      if (numerosporgenerar >= 1 && numerosporgenerar <= 9)
	printf (" \n %d ", numerosporgenerar);
      else
	printf ("\n%d ", numerosporgenerar);
	
        for (int j = 1; j <= numerosporgenerar; j++)
	    printf ("$");
        }
        
  return 0;
}
