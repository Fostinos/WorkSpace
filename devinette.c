#include<stdio.h>
#include<stdlib.h>
#include<time.h>




int main()
{
	int aleatoire;

	// 1. Generer le nombre aleatoire

	srand(time(NULL)); // initialiser le generateur de nombre aleatoire

	aleatoire = rand()%101; // [0; 100]

	printf("Nombre aleatoire : %d\n", aleatoire);

	// Boucle de devinette
	int number = 0; // nombre d'essais
	int input;
	for(number = 0; number<6; number++)
	{

		// Saisie de nombre entier 
		do
		{
			printf("Saisissez un nombre entier entre 0 et 100 : ");
			scanf("%d", &input);
		} while (input < 0 || input > 100); // ]-oo; 0[ U ]100; +oo[
		
		if(input < aleatoire)
		{
			printf("Trop petit\n");
		}
		else if(input > aleatoire)
		{
			printf("Trop grand\n");
		}
		else // input == aleatoire
		{
			printf("Bravo\n");
			break; // sortie avec succes
		}

	}
	


	return 0;
}