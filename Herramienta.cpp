#include "Herramienta.h"

void Herramienta::addPassive(PassiveEffects e)
{
	if (e.type == Defense) {
		plusDefense += e.value;
	}

	if (e.type == Attack) {
		plusAttack += e.value;
	}

	if (e.type == Invisible) {
		//POR EJEMPLO, DA IGUAL QUE EL ATACANTE ATAQUE O SE DEFIENDA, SALES AIROSO DE LA RONDA
	}

	if (e.type == Attack) {
		//
	}

	if (e.type == Attack) {
		//
	}
}
