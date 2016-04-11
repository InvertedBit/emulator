#include "Console.h"

Console::getInstance() {
	if(this->instance == null)
		this->instance = new Console();

	return this->instance;
}
