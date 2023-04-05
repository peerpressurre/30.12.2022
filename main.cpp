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
	cout << (char)201;
	for (size_t i = 0; i < 35; i++)
	{
		cout << (char)205;
	}	
	cout << (char)187 << endl;
	cout << (char)186 << "              Seasons              " << (char)186 << endl;
	cout << (char)204;
	for (size_t i = 0; i < 35; i++)
	{
		(i == 8 || i == 17 || i == 26 || i == 35) ? cout << (char)203 : cout << (char)205;
	}
	cout << (char)185 << endl;
	cout << (char)186 << " Winter " << (char)186 << " Spring " << (char)186 << " Summer " << (char)186 << " Autumn " << (char)186 << endl;
	cout << (char)200;
	for (size_t i = 0; i < 35; i++)
	{
		(i == 8 || i == 17 || i == 26 || i == 35) ? cout << (char)202 : cout << (char)205;
	}
	cout << (char)188 << endl;
}

int main()
{
	cout << "Ex1:\n";
	info();
	cout << endl;
	cout << "Ex2:\n";
	quote();
	cout << endl;
	cout << "Ex3:\n";
	table();
	return 0;
}