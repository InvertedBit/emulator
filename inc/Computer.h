#ifndef COMPUTER_H
#define COMPUTER_H

#include "Component.h"
#include "Mainboard.h"

#include <string>

using namespace std;

class Computer {
	protected:
        string state;
        Mainboard* mainboard;
	public:
	Computer();
	void addComponent(Component* comp);
	void boot();
	string getState();
};

#endif
