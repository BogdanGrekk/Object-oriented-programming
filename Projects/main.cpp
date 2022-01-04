#include <iostream>
#include <cmath>
using namespace std;

class ball {
    float r;
    float ext;
public:
    void print_val()
    {
        cout<<"Радіус="<<r<<"\n Об'єм="<<ext<<endl;
    }
ball(float x)//конструктор з параметрами
{
    this->r=x;
    this->ext=(4.0/3.0)*M_PI*pow(r,3);
}
ball()//конструкція без параметрів
{
    this->r=0;
    this->ext=0;
}
~ball (){//деструктор
cout << "\n Черга зруйнована.";
}
void in();
friend float Summa(ball&eks1, ball&eks2){//об'являЄмо функцію дружньою щоб отримати доступ до функції поза класу
float Summa;//об'явлення суми
Summa = eks1.ext + eks2.ext;//формула суми
return Summa;
}
};
void ball::in(){//присвоюємо класу значення після їх введення
    cout<<"радіус кулі - ";
    cin>>r;
    ext=(4.0/3.0)*M_PI*pow(r,3);
}
int main()
{
    setlocale(0, "Ukr");
    ball eksemp1;//створення об'єкту класу
    eksemp1.print_val();//викликаємо функцію класа
    ball eksemp2(9);
    eksemp2.print_val();
    eksemp1.in();
    eksemp1.print_val();
    cout << "Сумма " << Summa(eksemp1, eksemp2)<<endl;
    float r = pow(((3.0/4.0)*Summa(eksemp1, eksemp2)/M_PI),1.0/3.0);//формула підрахунку суми об'ємів куль
    cout<<"перерахований радіус - "<<r<<endl;
    return 0;
}
