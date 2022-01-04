#include <iostream>
#include <fstream>
#include <string>
#include <conio.h>
#include <typeinfo> 
using namespace std;
int i = 0;
class People
{
public:
	string PIB;
	int pn;/*phone number*/
	int *db;/*date birthday*/
	People()
	{
		PIB = "";
		pn = 0;
		db = NULL;
	}
	friend ifstream& operator >>(ifstream& t, People& s);/*reading from file*/
	friend ostream& operator <<(ostream& t, People& s); /*output to the screen*/
	friend ofstream& operator <<(ofstream& t, People& s); /*output to the file*/
};
ifstream& operator >>(ifstream& t, People& s)
{
	s.db = new int[3];
	t >> s.PIB;
	t >> s.pn;
	t >> s.db[0];
	t >> s.db[1];
	t >> s.db[2];
	return t;
}
ostream& operator <<(ostream& t, People& s)
{
		t << "People " << s.PIB << ", ";
		t << "Who has number " << "+380" << s.pn << ", ";
		t << "Was borned in " << s.db[0] << " "<< s.db[1] << " "<< s.db[2] << " ";
		return t;
}
ofstream& operator <<(ofstream& t, People& s)
{
	t << "People " << s.PIB << ", ";
	t << "Who has number " << "+380"<< s.pn << ", ";
	t << "Was borned in " << s.db[0] << " " << s.db[1] << " " << s.db[2] << " ";
	return t;
}
int main()
{
	setlocale(0, "Ukr");
	int Month;
	cin >> Month;
	ifstream fin("C:\\Users\\Bogdan\\Desktop\\Kursova OOP\\file.txt");
	if (!fin)
	{
		cout << "Can't open file C:\\Users\\Bogdan\\Desktop\\Kursova OOP\\file.txt";
		_getch(); 
		return 0;
	}
	ofstream fout("C:\\Users\\Bogdan\\Desktop\\Kursova OOP\\file1.txt");
	if (!fout)
	{
		cout << "Can't create file C:\\Users\\Bogdan\\Desktop\\Kursova OOP\\file1.txt";
		_getch(); 
		return 0;
	}
	while (!fin.eof())
	{
		People s;
		fin >> s;
		if (Month == s.db[1])
		{
			cout << s << endl;
			fout << s;
			i=1;
		}
	}
	if (i == 0)
	{
		cout << "there are none" << endl;
	}
	fin.close();
	fout.close();
	_getch();
}