#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <conio.h>

int main() {

	//Déclaration des varaibles

	char sexe = 'h';
	char prenom[20];
	char nom[20];
	char* ptr1;
	ptr1 = &prenom;
	char* ptr2;
	ptr2 = &nom;

	//Récupération des ionfos de l'utilisateur

	printf("(h)omme ou (f)emme ? ");
	sexe = _getch();
	printf("\n");
	printf("Votre nom (pas plus de 19 caractere): ");
	scanf_s("%c", nom);
	printf("Votre prenom (pas plus de 19 caractere): ");
	scanf_s("%s", prenom);
	if (sexe == 'h') {
		printf("Monsieur %s %s", nom, prenom);
	}
	else {
		printf("Madame %s %s", nom, prenom);
	}
	return(EXIT_SUCCESS);
}