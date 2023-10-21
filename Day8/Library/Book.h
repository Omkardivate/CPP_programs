#ifndef BOOK_H
#define BOOK_H

#include "Distributor.h"
#include "Author.h"

class Book : public Distributor,public Author
{
	public:
		Book();
		Book(char*,char*,char*,char*);
		~Book();
		void display();
	protected:
		char bname[20];
};

#endif


