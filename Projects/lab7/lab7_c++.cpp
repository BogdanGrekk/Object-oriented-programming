#include <iostream>
#include <string>
using namespace std;
class Organization {
public:
	string name;
	int summa;
	Organization(string name, int summa) {
		this->name = name;
		this->summa = summa;
	}
	virtual void Vyvid() {
		cout<< "There are many organizations"<<endl;
	}
	~Organization(){}
};
class Strahova : public Organization {
public:
	int kilk;
	Strahova(string name, int summa, int kilk) : Organization(name, summa) {
		this->name = name;
		this->summa = summa;
		this->kilk = kilk;
	}
	void Vyvid() {
		cout << "Agent surname - " << name << endl;
		cout << "Number of polises - " << kilk<< " " << endl;
		cout << "All summ -" << summa << " " << endl;

	}
	~Strahova(){}
};
class Budivna : public Organization {
public:
	int metrazh;
	Budivna(string name, int summa, int metrazh) : Organization(name, summa) {
		this->name = name;
		this->summa = summa;
		this->metrazh = metrazh;
	}
	void Vyvid() {
		cout << "Prorab surname - " << name << endl;
		cout << "All smetta -" << summa << " Grn " << endl;
		cout << "Metrazh - " << metrazh << " m^2 " << endl;
	}
	~Budivna(){}
};
class Metbud : public Budivna{
public:
	int kilk;
	Metbud(string name, int metrazh, int kilk) : Budivna(name, summa,metrazh) {
		this->name = name;
		this->summa = summa;
		this->metrazh = metrazh;
		this->kilk = kilk;
	}
	void Vyvid() {
		cout << "Marshrut name - " << name << endl;
		cout << "Vidstan - " << metrazh << " km " << endl;
		cout << "Kilkist passangers -" << kilk << " " << endl;
	}
	~Metbud(){}
};
int main(){
	Organization* A[3];
	Strahova S("Fedorchuk", 12, 3450);
	A[0] = &S;
	Budivna B("Avdotov", 9576, 88);
	A[1] = &B;
	Metbud M("Darnitsa-Teremki", 23, 9845);
	A[2] = &M;
	for (int i = 0; i < 3; i++)
		A[i]->Vyvid();
}