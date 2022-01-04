#include <iostream>
#include <fstream>
#include <conio.h>
#include <cstring>
using namespace std;
class Pupil{
int math, phys, tech;
char surname[50],name[50];
public:
char* getSurname(){
return surname;
}
void setSurname(char*surname){
strcpy_s(this->surname, surname);
}
char* getName(){
return name;
}
void setName(char*name){
strcpy_s(this->name, name);
}
int* getAppraisals(){
int grades[3];
grades[0]=math;
grades[1]=phys;
grades[2]=tech;
return grades;
}
void setAppraisals(int mathematics, int physics, int technology){
math=mathematics;
phys=physics;
tech=technology;
}
void Pr(){
cout<<surname<<"\n"<<name<<"має \t"<<math<<","<<phys<<","<<tech<<endl;
}
};
int main(){
    setlocale(0, "Ukr");
ifstream fin("data.txt");
if(!fin){
    cout<<"Помилка"<<endl;
    _getch();
return 0;
}
int number,i,j,g,calculator=0;
fin>>number;
Pupil* s=new Pupil[number];
int sub;
cout<<"Оберіть предмет( Математика - 1, Фізика - 2, Інформатика - 3) -"<<endl;
cin>>sub;
switch(sub){
case 1:
    for(i=0;i<number;i++){
      int Math, Phys, Tech;
      char Surname1[50],Name1[50];
      fin>>Surname1;
      fin>>Name1;
      fin>>Math;
      fin>>Phys;
      fin>>Tech;
      if(Math==3){
        s[calculator].setSurname(Surname1);
        s[calculator].setName(Name1);
        s[calculator].setAppraisals(Math, Phys, Tech);
        calculator++;
      }
    }
    break;
case 2:
    for(i=0;i<number;i++){
      int Math, Phys, Tech;
      char Surname1[50],Name1[50];
      fin>>Surname1;
      fin>>Name1;
      fin>>Math;
      fin>>Phys;
      fin>>Tech;
      if(Phys==3){
        s[calculator].setSurname(Surname1);
        s[calculator].setName(Name1);
        s[calculator].setAppraisals(Math, Phys, Tech);
        calculator++;
      }
    }
    break;
case 3:
    for(i=0;i<number;i++){
      int Math, Phys, Tech;
      char Surname1[50],Name1[50];
      fin>>Surname1;
      fin>>Name1;
      fin>>Math;
      fin>>Phys;
      fin>>Tech;
      if(Tech==3){
        s[calculator].setSurname(Surname1);
        s[calculator].setName(Name1);
        s[calculator].setAppraisals(Math, Phys, Tech);
        calculator++;
      }
    }
    break;
default:
    system("cls");
    cout<<"Спробуйте знову"<<endl;
    _getch();
    break;
}
for(i=0;i<calculator-1;i++){
    for(g=i+1;g<calculator;g++){
        if(strcmp(s[i].getName(),s[g].getName())>0){
            Pupil t=s[i];
            s[i]=s[g];
            s[g]=t;
        }
            for(j=i+2;j<calculator;j++){
        if(strcmp(s[i].getSurname(),s[j].getSurname())>0){
            Pupil t=s[i];
            s[i]=s[j];
            s[j]=t;
        }
    }
}
cout<<"\n Предмет"<<"math"<<"phys"<<"tech"<<endl;
for(int i=0;i<calculator;i++)
    s[i].Pr();
    _getch();
    fin.close();
    _getch();
    return 0;
}
}
