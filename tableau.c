#include<stdio.h>
#include<string.h>



int main()
{
	int tableau[5] = {1, 2, 3, 4, 5};

	// Elever au carre
	for(int i=0; i<5; i++)  // i = indice des elements du tableau
	{
		tableau[i] = pow(tableau[i]);    // pow(x, y) = x puissance y
	}

	// Affichage : 
	for(int i=0; i<5; i++) 
	{
		printf("tableau[%d] = %d\n", i, tableau[i]);
	}

	int matrice[2][3] = { {1, 1, 1}, {3, 4, 6} };


	char name[50];
	char address[25] = "Rabat";

	printf(address);
	printf("\n%s : adresse de Fostin\n", address);
	
	printf("Entrez votre nom : ");
	scanf("%s", &name);

	printf("Bonjour %s\n", name);
	printf("Longueur de la chaine : %d\n", strlen(name));
	
	return 0;
}