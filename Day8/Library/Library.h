#ifndef LIBRARY_H
#define LIBRARY_H

class Library
{
	public:
		Library();
		Library(char*);
		~Library();
		void display();
	protected:
		char lname[20];
};

#endif
