#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>

int main() {
	/*D�claration des variables*/
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
	/*65 � 90*/
	while ((estPalindrome) && (i + compteur1 < 50 - (i + compteur2))) {
		int ascii1 = (int)*(mot + i + compteur1);
		int ascii2 = (int)*(mot + 50 - (i + compteur2));
		if ((ascii1 < 65) || (ascii1 > 90)) {
			compteur1++;					/*Le caract�re de droite n'est pas alphab�tique donc on passe au suivant*/
		}
		else if ((ascii1 < 65) || (ascii1 > 90)) {
			compteur2++;					/*Le caract�re de gauche n'est pas alphab�tique donc on passe au suivant*/
		}
		else if (ascii1 != ascii2) {
			estPalindrome = false;			/*Les caract�res sont diff�rents donc ce n'est pas un palindrome*/
		}
		else {
			i++;							/*Aucun probl�me rencontr� donc on passe au 2 caract�res suivants � comparer*/
		}
	}

	if (estPalindrome) {
		printf("\nIl s'agit d'un palindrome.");
	}
	else {
		printf("\nCe n'est pas un palindrome");
	}
}