#ifndef OS_H_INCLUDED
#define OS_H_INCLUDED

#include "Software.h"

using namespace std;

class OperatingSystem : public Software {
private:
	string architecture;
public:
	OperatingSystem();
	OperatingSystem(const string n,const string t,const string a,const string ar);
	OperatingSystem(const OperatingSystem &obj);

	void print() const;

	bool SetArchitecture(string ar);
	string GetArchitecture() const;

	OperatingSystem & operator=(const OperatingSystem &o);
};


#endif // OS_H_INCLUDED
