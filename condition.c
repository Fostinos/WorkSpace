#include<stdio.h>
#include<math.h>

int main(void)
{
	int a = 1;
	int b = 4;
	int c = 3;

	int delta;
	delta = b*b - 4*a*c;

	if(delta > 0)
	{
		// Deux solutions x1 et x2
		float x1, x2;

		x1 = (-b - sqrt(delta))/(2*a);
		x2 = (-b + sqrt(delta))/(2*a);

		printf("Les deux solutions reelles de l'equation : \n");
		printf("x1 = %.2f\n", x1);
		printf("x2 = %.2f\n", x2);

	}
	else if (delta == 0) // delta = 0
	{
		// Une solution double x0
		float x0;

		x0 = (-b)/(2*a);

		printf("La solution double de l'equation : \n");

		printf("x0 = %f\n", x0);
	}
	else // delta < 0
	{
		printf("Pas de solution dans R\n");
	}

	
	printf("Fin du programme\n");
	return 0;
}