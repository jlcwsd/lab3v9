#ifndef SOFTWARE_H_INCLUDED
#define SOFTWARE_H_INCLUDED

#include <iostream>
#include <windows.h>
#include <cstring>

using namespace std;

	class Software {
    protected:
	string name, type, author;
	public:
		Software();
		Software(const string n,const string t,const string a);
		Software(const Software &obj);

		virtual void print() const = 0;

		void SetName(const string n);
		void SetType(const string t);
		void SetAuthor(const string a);

		string GetName() const;
		string GetType()const;
		string GetAuthor() const;

		Software & operator=(const Software &o);
	};


#endif // SOFTWARE_H_INCLUDED
