#ifndef PIN_H
#define PIN_H

#include <list>

using namespace std;

class Pin {
	protected:
	bool state;
	list<Pin> listeners;
	
	public:
	Pin();
	void connect(Pin pin);
	void disconnect(Pin pin);
	void setState(bool state);

};

#endif
