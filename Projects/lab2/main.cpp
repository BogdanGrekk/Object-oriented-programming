#include <iostream>
#include <cmath>
using namespace std;

class ball {
    float r;
    float ext;
public:
    void print_val()
    {
        cout<<"Ðàä³óñ="<<r<<"\n Îá'ºì="<<ext<<endl;
    }
ball(float x)
{
    this->r=x;
    this->ext=(4.0/3.0)*M_PI*pow(r,3);
}
ball()
{
    this->r=0;
    this->ext=0;
}
~ball (){
cout << "\n ×åðãà çðóéíîâàíà.";
}
void in();
friend float Summa(ball&eks1, ball&eks2){
float Summa;
Summa = eks1.ext + eks2.ext;
return Summa;
}
};
void ball::in(){
    cout<<"ðàä³óñ êóë³ - ";
    cin>>r;
    ext=(4.0/3.0)*M_PI*pow(r,3);
}
int main()
{
    setlocale(0, "Ukr");
    ball eksemp1;
    eksemp1.print_val();
    ball eksemp2(9);
    eksemp2.print_val();
    eksemp1.in();
    eksemp1.print_val();
    cout << "Ñóììà " << Summa(eksemp1, eksemp2)<<endl;
    float r = pow(((3.0/4.0)*Summa(eksemp1, eksemp2)/M_PI),1.0/3.0);
    cout<<"ïåðåðàõîâàíèé ðàä³óñ - "<<r<<endl;
    return 0;
}
