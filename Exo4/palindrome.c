#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>

int main() {
	/*Déclaration des variables*/
	bool estPalindrome = true;
	char mot[50];
	int compteur1 = 0;
	int compteur2 = 0;
	int i = 0;

	printf("Entrez voter mot : ");
	scanf_s("%c", &mot);
	for (int i = 0; i < 50; i++) {
		mot[i] = toupper(mot[i]);
	}
	/*65 à 90*/
	while ((estPalindrome) && (i + compteur1 < 50 - (i + compteur2))) {
		int ascii1 = (int)*(mot + i + compteur1);
		int ascii2 = (int)*(mot + 50 - (i + compteur2));
		if ((ascii1 < 65) || (ascii1 > 90)) {
			compteur1++;					/*Le caractère de droite n'est pas alphabétique donc on passe au suivant*/
		}
		else if ((ascii1 < 65) || (ascii1 > 90)) {
			compteur2++;					/*Le caractère de gauche n'est pas alphabétique donc on passe au suivant*/
		}
		else if (ascii1 != ascii2) {
			estPalindrome = false;			/*Les caractères sont différents donc ce n'est pas un palindrome*/
		}
		else {
			i++;							/*Aucun problème rencontré donc on passe au 2 caractères suivants à comparer*/
		}
	}

	if (estPalindrome) {
		printf("\nIl s'agit d'un palindrome.");
	}
	else {
		printf("\nCe n'est pas un palindrome");
	}
}