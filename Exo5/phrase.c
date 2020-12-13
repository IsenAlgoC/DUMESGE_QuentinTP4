#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main() {
	char buffer[1025]; /*Chaîne de longueur 1024 + 1 pour '\0'*/
	int nb_mot = 0;
	int longueur_mot = 0;
	float moyenne_longueur = 0;


	//Demande de la phrase 

	printf("Entrer une phrase.\n");
	gets_s(buffer, 1024);

	/*Calcul du nombre de mot et de leur longueur en parcourant le tableau*/
	for (int i = 0; i < strlen(buffer); i++) {
		if (buffer[i] == ' ') {
			nb_mot += 1;
			moyenne_longueur += longueur_mot;
			longueur_mot = 0;
		}
		else {
			longueur_mot += 1;
		}
	}

	moyenne_longueur = moyenne_longueur / nb_mot;
	printf("Dans cette phrase il y a %d mots ayant en moyenne %f caracteres.", nb_mot, moyenne_longueur);
}