#include "Software.h"

    Software::Software(){
		name = "name";
		type = "type";
		author = "author";
	}

	Software::Software(const string n,const string t,const string a) {
		SetName(n);
		SetType(t);
        SetAuthor(a);
	}

	Software::Software(const Software &obj) {
		name = obj.name;
		type = obj.type;
		author = obj.author;
	};

	void Software::print() const{
		cout << name << " - " << type << " - " << author << endl;
	}

	void Software::SetName(const string n) {
		this->name=n;
	}

	void Software::SetType(const string t) {
		this->type=t;
	}

	void Software::SetAuthor(const string a) {
		this->author=a;
	}

	string Software::GetName() const { return name; }
	string Software::GetType() const { return type; }
	string Software::GetAuthor() const { return author; }

	Software & Software::operator=(const Software &o) {
		this->name = o.name, this->type = o.type, this->author = o.author;
		return *this;
	}
