#include<stdio.h>

int main(void)
{

	/* Boucle while */
	int tour = 0;

	while(tour < 5)
	{
		printf("Execution numero %d\n", tour);
		tour++;
	}

	/* Boucle do while */
	// Exemple : controle de saisie
	int val = 0;
	do
	{
		printf("Saisissez un nombre positif : ");
		scanf("%d", &val);
	} while (val < 0); 


	/* Boucle for */
	// Exaemple : afficher la table de mutiplication de 5  (0 à 9) 

	printf("\nTable de de mutiplication de 5 :\n");
	for(int compteur = 0; compteur <= 9; compteur++)
	{
		printf("5 fois %d egal %d \n", compteur, 5*compteur );
		if(compteur == 4)
		{
			break;
		}
	}
	

	printf("\nTable de de mutiplication de 6 :\n");
	for(int compteur = 0; compteur <= 9; compteur++)
	{
		if(compteur == 4)
		{
			continue;
		}
		printf("6 fois %d egal %d \n", compteur, 6*compteur );
		if(compteur == 5)
		{
			break;
		}
	}

	return 0;
}