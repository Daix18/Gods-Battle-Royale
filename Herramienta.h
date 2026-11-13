#pragma once
#include "Library.h"

class Herramienta
{
public:
	string name;
	PassiveEffects e;
	int plusDefense;
	int plusAttack;
	Herramienta(string name, PassiveEffects e, int plusDefense, int plusAttack){
		this->name = name;
		this->e = e;
		this->plusDefense = plusDefense;
		this->plusAttack = plusAttack;
	}
	
	void addPassive(PassiveEffects e);



};

