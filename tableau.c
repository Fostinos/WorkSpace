#include<stdio.h>
#include<string.h>


int main()
{
	int tableau[5] = {1, 2, 3, 4, 5};

	char name[50];
	
	printf("Entrez votre nom : ");
	scanf("%s", &name);

	printf("Bonjour %s\n", name);
	printf("Nomre de caracteres : %d\n", strlen(name));


	return 0;
}