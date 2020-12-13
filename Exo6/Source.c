#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <ctype.h>

int main() {
	/*Déclaration des variables*/
	int tableau[100];
	int* curseur = &tableau;
	int val = 0;
	int au_moins_un = 0;

	srand(time(NULL));
	/*Initialisation du tableau de valeur entre 0 et 20*/
	for (int i = 0; i < 100; i++) {
		*(curseur + i) = rand() % 20;
	}

	/*Recherche de la valeur*/
	printf("Entrez la valeur recherchee : ");
	scanf_s("%d",&val);

	for (int i = 0; i < 100; i++) {
		if ((*(curseur + i) == val) && (au_moins_un == 0)) {		/*On commence la phrase si aucune valeur n'a encore été trouvé*/
			au_moins_un = 1;
			printf("\nLa valeur %d a ete trouvee en %d", val, i);
		}
		else if (*(curseur + i) == val) {		/*On continue la phrase*/
			printf(", puis en %d", i);
		}
	}
	if (au_moins_un == 0) {
		printf("\nAucune occurence pour la valeur %d", val);
	}
	else {
		printf(".");
	}
}