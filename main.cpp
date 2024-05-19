#include <iostream>
using namespace std;



class Person{
        string name;
        int age;
    public:
        Person(string name, int age){
            this->name = name;
            this->age = age;
        }

        void display(){
            cout << name << " " << age << endl;
        }
};

int main(){
    Person p1("Shmuli", 20);
    p1.display();
    return 0;
}