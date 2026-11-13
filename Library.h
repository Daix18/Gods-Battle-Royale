#pragma once
#include <iostream>
using namespace std;

enum PassiveType {
	Defense,
	Attack,
	Invisible,
};

struct PassiveEffects {
	string name;
	PassiveType type;
	int value;
};
