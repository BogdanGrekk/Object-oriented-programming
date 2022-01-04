#include <iostream>
#include <string>
using namespace std;
class drukvid {
public:
    string method;
    int kilkstor;
    string obklad;
    drukvid(string method,int kilkstor,string obklad) {
        this->method = method;
        this->kilkstor = kilkstor;
        this->obklad = obklad;
    }
    ~drukvid(){}
};
class jurn : public drukvid {
public:
    jurn(string method, int kilkstor,string obklad) : drukvid(method,kilkstor,obklad) {
        this->method = method;
        this->kilkstor = kilkstor;
        this->obklad = obklad;
    }
    ~jurn(){}
};
class knigka : public drukvid {
public:
    string author;
    knigka(string method,int kilkstor,string obklad,string author) : drukvid(method, kilkstor, obklad){
        this->method = method;
        this->kilkstor = kilkstor;
        this->author = author;
        this->obklad = obklad;
    }
    ~knigka() {}
};
class pidruchn : public knigka {
public:
    pidruchn(string method, int kilkstor, string obklad, string author) : knigka(method, kilkstor, obklad, author) {
        this->method = method;
        this->kilkstor = kilkstor;
        this->author = author;
        this->obklad = obklad;
    }
    ~pidruchn() {}
};
int main()
{
    string method;
    int kilkstor;
    string obklad;
    string author;
    drukvid obj1("tisnennia or druk",73, "tverda abo mjaka obkladinka");
    cout << "Drukovane vidannia" << " " << endl;
    cout << "Metod - " << obj1.method << endl;
    cout << "Kilkist storinok - " << obj1.kilkstor << " " << endl;
    cout << "Mae -" << obj1.obklad << " " << endl;
    jurn obj2("tisnennia", 43, "mjaku obkladinku");
    cout << "Jurnal" << " " << endl;
    cout << "Metod -" << obj2.method << " " << endl;
    cout << "Kilkist storinok -" << obj2.kilkstor << " " << endl;
    cout << "Mae -" << obj2.obklad << " " << endl;
    knigka obj3("druk", 563, "Alfredo Chigolli", "tverdu obkladinku");
    cout << "Knigka" << " " << endl;
    cout << "Metod - " << obj3.method << " " << endl;
    cout << "Kilkist storinok - " << obj3.kilkstor << " " << endl;
    cout << "Author - " << obj3.author << " " << endl;
    cout << "Mae -" << obj3.obklad << " " << endl;
    pidruchn obj4("druk abo tisnennia", 158, "Oleksander Avramenko", "tverdu abo miaku obkl");
    cout << "Pidruchnik" << " " << endl;
    cout << "Metod - " << obj4.method << " " << endl;
    cout << "Kilkist storinok - " << obj4.kilkstor << " " << endl;
    cout << "Author - " << obj4.author << " " << endl;
    cout << "Mae -" << obj4.obklad << " " << endl;
}

