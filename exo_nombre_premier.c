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


	// Verifier si n est un nombre premier ? 
	// boucle : [2; n[
	int signal = 0;

	for(int i=2; i<n; i++)
	{
		// n est divisible par i ?
		if(n%i == 0)
		{
			// i est diviseur de n
			signal = 1;
			break;
		}
	}// fin de boucle
	
	// signal peut etre 0 ou 1

	if(signal == 0)
	{
		// n est un nombre premier
		printf("%d est un nombre premier", n);
	}

	if(signal == 1)
	{
		// n n'est un nombre premier
		printf("%d n'est pas un nombre premier", n);
	}

	return 0;
}