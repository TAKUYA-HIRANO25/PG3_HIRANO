#include <stdio.h>
#include <stdlib.h>
#include "Character.h"
#include "Kuppa.h"
#include "Luigi.h"
#include "Mario.h"

int main() {

	Character* character[3];

	for (int i = 0; i < 3; i++) {
		if (i == 0) {
			character[i] = new Kuppa;
		}
		else if (i == 1) {
			character[i] = new Luigi;
		}

		else if (i == 2) {
			character[i] = new Mario;
		}

	}
	for (int i = 0; i < 3; i++) {
		character[i]->Drow();

	}

	for (int i = 0; i < 3; i++) {
		delete character[i];

	}

	return 0;
}