#include <iostream>
#include <list>
using namespace std;

class nameuser{//Name class

    //Variables
    string Name;
    string Nickname;
    int Age;
    list<string> publicname;


};
// TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
int main()
{

    //Information about name,nickname and age people
    nameuser nameUser;
    nameUser.Name="Tassiana Milka";
    nameUser.Nickname ="Milka,Tassi or Tata";
    nameUser.age=22;

    //Print about information
    cout<<"Name:"nameUser.Name<<end1;
    cout<<"Nickname:"nameUser.Nicckname<<end1;
    cout<<"Age:"nameUser.Age<<end1;



   system("pause>0");


}
