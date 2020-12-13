#include <stdlib.h>
#include <stdio.h>

#define SEPARATEUR '/'
#define TAILLETAB1 20

int main() {
	int MyTab1[TAILLETAB1];
	for (int i = 0; i < TAILLETAB1; i++) {
		MyTab1[i] = i;
	}

	//Affichage du tableau avec SEPARATEUR

	for (int i = 0; i < 10; i++){
		printf("  %d %c", MyTab1[i],SEPARATEUR);
	}
	printf("\n");
	for (int i = 10; i < 20; i++) {
		printf(" %d %c", MyTab1[i], SEPARATEUR);
	}

	printf("\n\n");
	
	//Affichage du tableau de la fin au début avec les pointeurs

	int* ptr;
	ptr = &MyTab1[19];
	for ( int i = 0; i < TAILLETAB1; i++){
		printf(" %d %c", *ptr, SEPARATEUR);
		ptr--;
	}

}