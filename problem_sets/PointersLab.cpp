#include <iostream>

using namespace std;
class Person {
public:
    string name;
    int age;
    int height;
    int weight;

    //CONSTRUCTOR
    Person(string name, int age, int height, int weight) {
    this->name = name;
    this->age = age;
    this->height = height;
    this->weight = weight;

    }
};

void ModifyPerson(Person &person){
person.name = "JACKSON";
}

//PassByValue Function
int PassByValue (int a)
{
    cout << endl;
    cout << "PASS BY VALUE" <<endl;

     a = 10;
    return a;
}

//PassByRef Function
int PassByRef (int &i)
{
    cout << "PASS BY REF" <<endl;
    i = 50;
    return i;
}

int main()
{
    int num1;
    int num2;
    int * pNum;

    num1 = 3;
    num2 = 5;
    pNum = &num2;

        //Calling the PassByValue function
    int num3 = PassByValue(num1);
    cout << "NUM1 : " << num1 << endl  << "NUM1 NEW VALUE : " << num3 << endl;
cout << endl;

//Calling The PassByRef Function
cout << "pNum : "<< *pNum << endl;
    int num4 = PassByRef(*pNum);
    cout << "NEW VALUE OF pNum : " << num4 << endl;
    cout << endl;

    int num5 = PassByValue(*pNum);
    cout << "PASS BY VALUE CALLED AND PASSING pNum AS AN ARGUMENT" << endl;
    cout << num5 << endl;
    cout << endl;




    //CREATING A PERSON OBJECT
    Person person("NICOLAS ", 25, 175, 70);

    //OUTPUT THE VALUES STORED IN THME MEMBER VARIABLES
    cout << "PERSON INFORMATION : " << endl;
    cout << "NAME : " << person.name << endl;
    cout << "age : " << person.age << endl;
    cout << "height : " << person.height << endl;
    cout << "Weight : " << person.weight << endl;
    cout << endl;
    //CALL THE ModifyPerson FUNCTION
    ModifyPerson(person);

    //OUTPUT THE VALUES STORED IN THME MEMBER VARIABLES
    cout << "PERSON INFORMATION AFTER MODIFICATION : " << endl;
    cout << "NAME : " << person.name << endl;
    cout << "age : " << person.age << endl;
    cout << "height : " << person.height << endl;
    cout << "Weight : " << person.weight << endl;



   // double *num6 = new int
    //num6 = 8;
    //cout << *num6


  return 0;
}



