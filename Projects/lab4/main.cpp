#include <iostream>
#include <string>
#include <cmath>
#include <math.h>
using namespace std;
class research{//оголошення класу і об'єкту класу
int*a;
int siz=0, i=0, calc=0, SUM=0;
public:
    research(int siz)
    {
    a=new int[i];//створення нового об'єкта
   cout<<"Масив:\n";
   for (i=1;i<=siz;i++){//обчислення елементів масиву
    if(i%2==0){
        a[i]=i+3;
    }
    else{
        a[i]=i-7;
    }
    cout<<"[" <<a[i]<<"]"<<endl;
   }
   for(i=1;i<siz;i++){//виконання вказівок до обробки(Знайти суму кожного третього елемента)
    if(i%3==0){
        calc++;
        SUM=SUM+a[i];
    }
   }
   cout<<calc<<"-кiлькiсть\n";
   cout<<SUM<<"-сумма";
    }
~research(){//деструктор
delete[] a;//видалення динамічного масива
cout<<"\n Виносимо смiття";
}
research(const research& Research){//об'явлення конструктора копії
    siz = Research.siz;//передаємо siz значення Research
    a = new int[siz];//створення нового об'єкта
    for(int i=0;i<siz;i++)//копіюємо значення в новий об'єкт
        a[i]= Research.a[i];
    cout<<"\n Копiя конструктора викликана"<<endl;
}
};
int main()
{
setlocale(0, "Ukr");
research Research(11);//задаємо кількість елментів масиву
research res=Research;//створюємо копію об'єкта research
return 0;
}
