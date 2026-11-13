#pragma once
#include <iostream>
#include "Herramienta.h"
#include <vector>

using namespace std;

class Dios
{
	public:
		string name;
		int attack;
		int defense;
		int health;
		int attackMultiplier;
		int defenseMultiplier;
		int healthMultiplier;
		Herramienta tool;
		vector<Herramienta> tools;

		Dios(string name,int attack, int defense, int health, 
			int attackMultiplier, int defenseMultiplier, 
			int healthMultiplier,Herramienta tool) {
			this->name = name;
			this->attack = attack;
			this->defense = defense;
			this->health = health;
			this->attackMultiplier = attackMultiplier;
			this->defenseMultiplier = defenseMultiplier;
			this->healthMultiplier = healthMultiplier;
			this->tool = tool;
	}
};