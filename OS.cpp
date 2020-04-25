#include "OS.h"

OperatingSystem::OperatingSystem(){
	name = "name";
	type = "type";
	author = "author";
	architecture = "architecture";
}
OperatingSystem::OperatingSystem(const string n,const string t,const string a,const string ar) : Software(n, t, a){
SetArchitecture(ar);
}
OperatingSystem::OperatingSystem(const OperatingSystem &obj) {
	name = obj.name;
	type = obj.type;
	author = obj.author;
	architecture = obj.architecture;
};

void OperatingSystem::print() const{
	cout << name << " - " << type << " - " << author << " - " << architecture << endl;
}

bool OperatingSystem::SetArchitecture(const string ar) {
	this->architecture=ar;
	return true;
}
string OperatingSystem::GetArchitecture() const{
	return architecture;
}

OperatingSystem & OperatingSystem::operator=(const OperatingSystem &o) {
	this->name = o.name;
	this->type = o.type;
	this->author = o.author;
	this->architecture = o.architecture;
	return *this;
}
