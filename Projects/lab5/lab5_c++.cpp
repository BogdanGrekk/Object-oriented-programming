#include <iostream>
#include <string>
#include <cmath>
using namespace std;
class trapezeS {
	float S;
public:
	trapezeS(float S) {
		this->S = S;
	}
};
class trapeze {
	float basis1;
	float basis2;
	float height;
public:
	trapeze(float basis1, float basis2, float height) {
		this->basis1 = basis1;
		this->basis2 = basis2;
		this->height = height;
	}
	trapeze operator + (trapeze obj);//оголошення перевантаження операторів
	trapeze operator ++ (int);
	void show();//функція для виводу
	float ploscha() {//метод площі
		float S;
		S = (((basis1 + basis2) / 2) * height);//формула підрахунку площі трапеції
		return S;
	}
};
ostream& operator << (ostream& os, trapeze obj)//об'явлення перевенатження оператора <<
{
	float S = obj.ploscha();//знаходимо площу об'єкту obj
	obj.show();//викликаємо функціяб для виведення
	return os << "Ploscha = " << S << endl;//виводим площу
}
trapeze trapeze :: operator + (trapeze obj) {//об'явлення перевантаження оператора +
	trapeze obj3(0, 0, 0);//створюємо об'єкт
	obj3.basis1 = basis1 + obj.basis1;//операція додавання
	obj3.basis2 = basis2 + obj.basis2;
	obj3.height = height + obj.height;
	return obj3;
}
trapeze trapeze :: operator ++ (int) {//об'явлення перевантаження оператора ++
	basis1++;//додаємо 1 до змінної
	basis2++;
	height++;
	return *this;//повертаємо вказівник на об'єкт
}
void trapeze::show() {//функція виведення данних
	cout << "basis1 = " << basis1 << "\n";
	cout << "basis2 = " << basis2 << "\n";
	cout << "height = " << height << "\n";
}
int main()
{
	float basis1, basis2, height, S;
	setlocale(0, "Ukr");
	cout << "Основа 1 - ";
	cin >> basis1;
	cout << "Основа 2 - ";
	cin >> basis2;
	cout << "Висота - ";
	cin >> height;
	trapeze data(basis1, basis2, height), data2(4, 7, 2);
	data2++;//застосовуємо оператор ++ до data2
	trapeze dod = data + data2;//створюємо новий об'єкт що є результатом виконаня оператора +
	cout << dod;//виведення об'єкта
}
