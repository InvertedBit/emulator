#include <iostream>

#include "Computer.h"

using namespace std;

int main()
{
	Computer* cmp = new Computer();

	cout<<cmp->getState()<<endl;

	return 0;
}
