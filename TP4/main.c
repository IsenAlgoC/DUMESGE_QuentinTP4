#include "tp4.h"
#include <stdlib.h>
#include <stdio.h>

int main() {

	// Déclaration des variables

	HEURE HeureDebut, HeureFin, Duree;
	HeureDebut.heure = 12;
	HeureDebut.minute = 30;
	Duree.heure = 0;
	Duree.minute = 45;

	//Addition de HeureDebut et de Duree

	HeureFin.minute = (HeureDebut.minute + Duree.minute) % 60;
	HeureFin.heure = HeureDebut.heure + Duree.heure + (HeureDebut.minute + Duree.minute) / 60;

	printf("Heure de fin : %d:%d", HeureFin.heure, HeureFin.minute);
	reutrn(EXIT_SUCCESS);
}