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

void table()
{
	cout << (char)201 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)187 << endl;
	cout << (char)186 << "               Seasons                 " << (char)186 << endl;
	cout << (char)204 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)203 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)203 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)203 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)203 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)185 << endl;

	cout << (char)201;
	for (size_t i = 0; i < 39; i++)
	{
		cout << (char)205;
	}	
	cout << (char)187 << endl;
	cout << (char)186 << "               Seasons                 " << (char)186 << endl;
	cout << (char)204;
	for (size_t i = 0; i < 39; i++)
	{
		(i == 8 || i == 16 || i == 24 || i == 32) ? cout << (char)203 : cout << (char)205;
	}
	cout << (char)185;

}

int main()
{
	info();
	cout << endl;
	quote();
	cout << endl;
	table();
	return 0;
}