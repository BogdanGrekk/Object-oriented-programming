#include <iostream>
#include <string>
#include <cmath>
#include <math.h>
using namespace std;
class research{//���������� ����� � ��'���� �����
int*a;
int siz=0, i=0, calc=0, SUM=0;
public:
    research(int siz)
    {
    a=new int[i];//��������� ������ ��'����
   cout<<"�����:\n";
   for (i=1;i<=siz;i++){//���������� �������� ������
    if(i%2==0){
        a[i]=i+3;
    }
    else{
        a[i]=i-7;
    }
    cout<<"[" <<a[i]<<"]"<<endl;
   }
   for(i=1;i<siz;i++){//��������� ������� �� �������(������ ���� ������� �������� ��������)
    if(i%3==0){
        calc++;
        SUM=SUM+a[i];
    }
   }
   cout<<calc<<"-�i���i���\n";
   cout<<SUM<<"-�����";
    }
~research(){//����������
delete[] a;//��������� ���������� ������
cout<<"\n �������� ��i���";
}
research(const research& Research){//��'������� ������������ ��ﳿ
    siz = Research.siz;//�������� siz �������� Research
    a = new int[siz];//��������� ������ ��'����
    for(int i=0;i<siz;i++)//������� �������� � ����� ��'���
        a[i]= Research.a[i];
    cout<<"\n ���i� ������������ ���������"<<endl;
}
};
int main()
{
setlocale(0, "Ukr");
research Research(11);//������ ������� ������� ������
research res=Research;//��������� ���� ��'���� research
return 0;
}
