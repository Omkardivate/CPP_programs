#ifndef AUTHOR_H
#define AUTHOR_H

#include "Library.h"

class Author : virtual public Library
{
	public:
		Author();
		Author(char*);
		~Author();
		void display();
	protected:
		char aname[20];
};

#endif
