#include <iostream>
#include <Windows.h>
#include <stdlib.h>

using namespace std;

void info()
{
	cout << "Name\t\t: “The war and the peace”" << endl;
	cout << "Avtor\t\t: L.N. Tolstoj" << endl;
	cout << "Izdatelstvo\t: Piter" << endl;
	cout << "Pages\t\t: 500" << endl;
}

void quote()
{
	cout << "\a\a\a\"Kraj lukomor’a dub zelenyj,\a\a\a\n";
	Sleep(1500);
	cout << "\a\a\aI zolotyj lancyuh na nim : Shodnya, shonochi kit uchenyj";
	Sleep(1500);
	cout << "\a\a\a\nNa lancyuhu kruzhl’aje tim\"" << endl;
}
int main()
{
	info();
	cout << endl;
	quote();
	cout << endl;
	return 0;
}