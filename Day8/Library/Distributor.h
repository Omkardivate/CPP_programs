#ifndef DISTRIBUTOR_H
#define DISTRIBUTOR_H

#include "Library.h"

class Distributor : virtual public Library
{
	public:
		Distributor();
		Distributor(char*);
		~Distributor();
		void display();
	protected:
		char dname[20];
};

#endif
