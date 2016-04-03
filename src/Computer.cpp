#include "Computer.h"

Computer::Computer() {
	this->state = "Stopped";
}

void Computer::addComponent(Component* comp) {
	
}

string Computer::getState() {
	return this->state;
}
