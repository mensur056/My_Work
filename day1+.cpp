#include<iostream>
using namespace std;
class Person{
public:
string Name,Surname,City,Work;
int Age;
void IntroduceYourself(){
    cout<<"Name -"<<Name<<endl;
    cout<<"Surname -"<<Surname<<endl;
    cout<<"City -"<<City<<endl;
    cout<<"Work -"<<Work<<endl;
    cout<<"Age -"<<Age<<endl;

}Person(string name,string surname,string city,string work,int age){
    Name=name;
    Surname=surname;
    City=city;
    Work=work;
    Age=age;}
};
int main(){
   
    Person person1=Person("Mansur","Isgenderov","Azerbaijan","Engineer",23);
    person1.IntroduceYourself();
    Person person2=Person("Emil","Qeniyev","Germany","Lowyer",20);
    person2.IntroduceYourself();
}



