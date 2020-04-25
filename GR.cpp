#include "GR.h"

GraphicEditor::GraphicEditor() {
	name = "name";
	type = "type";
	author = "author";
	oper_sys = "oper_sys";
}
GraphicEditor::GraphicEditor(const string n,const string t,const string a,const string g) : Software(n, t, a){
SetOper_sys(g);
}
GraphicEditor::GraphicEditor(const GraphicEditor &obj) {
	name = obj.name;
	type = obj.type;
	author = obj.author;
	oper_sys = obj.oper_sys;
};

bool GraphicEditor::SetOper_sys(const string g) {
	this->oper_sys=g;
	return true;
}
string GraphicEditor::GetOper_sys() const{
	return oper_sys;
}

void GraphicEditor::print() const{
	cout << name << " - " << type << " - " << author << " - " << oper_sys << endl;
}

GraphicEditor & GraphicEditor::operator=(const GraphicEditor &o) {
	this->name = o.name;
	this->type = o.type;
	this->author = o.author;
	this->oper_sys = o.oper_sys;
	return *this;
}
