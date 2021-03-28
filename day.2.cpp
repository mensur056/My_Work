#include<iostream>
using namespace std;
class Worker{
private :
    string Name;
    string Surname;
    string Work;
    int Age;
public:
    Worker(string name,string surname,string work,int age ){};
    void setName(string name){Name=name;}
    string getName(){return Name;
    }
    void setSurname(string surname){Surname=surname;}
    string getSurname(){return Surname;
    }
    void setWork(string work){Work=work;}
    string getWork(){return Work;
    }
    void setAge(int age){Age=age;}
    int getAge(){return Age;
    }
    };
int main(){
    Worker worker1=Worker("Mansur","Serxanov","Engineer",24);
    

    Worker worker2=Worker("Elvin","Namazov","Builder",21);
   

    worker2.setAge(25);
    cout<<worker2.getName()<<"is"<<worker2.getAge()<<"years old"<<endl;






}