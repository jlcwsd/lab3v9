#include "Software.h"
#include "IDE.h"
#include "GR.h"
#include "OS.h"
#include <iostream>

using namespace std;

int main() {
    string p,g,ar;

	cout << "Objects: " << endl << endl;
	DevelopmentEnvironment Object1;
	DevelopmentEnvironment Object2("Frog","SuperPuper","Drozhzhin","Pascal");
	DevelopmentEnvironment Object3 = Object2;
	cout << "Object1: ";
	Object1.print();
	cout << "Object2: ";
	Object2.print();
	cout << "Object3: ";
	Object3.print();
	cout << endl;
	cout << "Input your programming language:";
	cin >> p;
	cout << endl;
    Object1.SetProg_lang(p);
	cout << endl;
	cout << "New programming language Object1: " <<  Object1.GetProg_lang() << "\n\n";
	Object3 = Object1;
	cout << "Object1: ";
	Object1.print();
	cout << "Object2: ";
	Object2.print();
	cout << "Object3: ";
	Object3.print();
	cout << endl << "GraphicEditor: " << endl << endl;
	GraphicEditor Object4;
	GraphicEditor Object5("Paint", "Proprietary", "GRdev", "OSforGR");
	GraphicEditor Object6 = Object5;
	cout << "Object4: ";
	Object4.print();
	cout << "Object5: ";
	Object5.print();
	cout << "Object6: ";
	Object6.print();
	cout << endl;
	cout << "Input your operating system:";
	cin >> g;
	Object4.SetOper_sys(g);
	cout << endl;
	cout << "New OS Object4: " << Object4.GetOper_sys() << "\n\n";
	Object6 = Object4;
	cout << "Object4: ";
	Object4.print();
	cout << "Object5: ";
	Object5.print();
	cout << "Object6: ";
	Object6.print();
	cout << endl << "OS: " << endl << endl;
	OperatingSystem Object7;
	OperatingSystem Object8("Fedora", "Commerce", "Microsoft", "64x");
	OperatingSystem Object9 = Object8;
	cout << "Object7: ";
	Object7.print();
	cout << "Object8: ";
	Object8.print();
	cout << "Object9: ";
	Object9.print();
	cout << endl;
	cout << "Input your architecture:";
	cin >> ar;
	Object7.SetArchitecture(ar);
	cout << endl;
	cout << "New architecture Object7: " << Object7.GetArchitecture() << "\n\n";
	Object9 = Object7;
	cout << "Object7: ";
	Object7.print();
	cout << "Object8: ";
	Object8.print();
	cout << "Object9: ";
	Object9.print();

	system("pause >nul");
	system("cls");
	return 0;
}
