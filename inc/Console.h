#ifndef UTILS_CONSOLE_H
#define UTILS_CONSOLE_H

#include <string>

using namespace std;

class Console {
	protected:
	static Console* instance;
	Console();
	static getInstance();
	public
	static log(string* message);
	static print(string* message);
};

#endif
