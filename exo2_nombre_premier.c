#include<stdio.h>


int main()
{

	int n;

	// Lecture du nombre strictement positif
	do
	{
		printf("Saisissez le nombre : ");
		scanf("%d", &n);
	} while (n <= 0);

	printf("Tous les nombres premiers strictement inferieurs a %d \n", n);

	/* Tous les nombres premiers strictement inferieurs a n : p apppartient à [2; n[ */

	int p;
	for(p = 2; p < n; p++)
	{

		// Verifier si p est un nombre premier ? 
		// boucle : [2; n[
		int signal = 0;

		for(int i=2; i<p; i++)
		{
			// p est divisible par i ?
			if(p%i == 0)
			{
				// i est diviseur de n
				signal = 1;
				break;
			}
		}// fin de boucle
		
		// signal peut etre 0 ou 1

		if(signal == 0)
		{
			// p est un nombre premier
			printf("%d ", p);
		}

	}




	return 0;
}