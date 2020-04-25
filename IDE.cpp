#include "IDE.h"

DevelopmentEnvironment::DevelopmentEnvironment(){
	name = "name";
	type = "type";
	author = "author";
	prog_lang = "prog_lang";
}
DevelopmentEnvironment::DevelopmentEnvironment(const string n,const string t,const string a,const string p) : Software(n, t, a)  {
SetProg_lang(p);
}
DevelopmentEnvironment::DevelopmentEnvironment(const DevelopmentEnvironment &obj) {
	name = obj.name;
	type = obj.type;
	author = obj.author;
	prog_lang = obj.prog_lang;
};

void DevelopmentEnvironment::print() const{
	cout << name << " - " << type << " - " << author << " - " << prog_lang << endl;
}

bool DevelopmentEnvironment::SetProg_lang(const string p) {
	this->prog_lang=p;
	return true;
}
string DevelopmentEnvironment::GetProg_lang() const{
	return prog_lang;
}

DevelopmentEnvironment & DevelopmentEnvironment::operator=(const DevelopmentEnvironment &o) {
	this->name = o.name;
	this->type = o.type;
	this->author = o.author;
	this->prog_lang = o.prog_lang;
	return *this;
}
