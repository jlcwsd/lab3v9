#ifndef GR_H_INCLUDED
#define GR_H_INCLUDED

#include "Software.h"

using namespace std;

class GraphicEditor : public Software {
private:
	string oper_sys;
public:
	GraphicEditor();
	GraphicEditor(const string n,const string t,const string a,const string g);
	GraphicEditor(const GraphicEditor &obj);

	void print() const;

	bool SetOper_sys(const string g);
	string GetOper_sys() const;

	GraphicEditor & operator=(const GraphicEditor &o);
};


#endif // GR_H_INCLUDED
