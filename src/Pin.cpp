#include "Pin.h"

Pin::Pin(){
}

void Pin::connect(Pin pin) {
	this->listeners.push_back(pin);
}
