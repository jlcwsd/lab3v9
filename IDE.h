#ifndef IDE_H_INCLUDED
#define IDE_H_INCLUDED

#include "Software.h"

using namespace std;

class DevelopmentEnvironment : public Software {
private:
    string prog_lang;
public:
	DevelopmentEnvironment();
	DevelopmentEnvironment(const string n,const string t,const string a,const string p);
	DevelopmentEnvironment(const DevelopmentEnvironment &obj);

	void print() const;

	bool SetProg_lang(const string p);
	string GetProg_lang() const;

	DevelopmentEnvironment & operator=(const DevelopmentEnvironment &o);
};


#endif // IDE_H_INCLUDED
