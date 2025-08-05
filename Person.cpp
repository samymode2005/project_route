#include "Person.h"
#include <iostream>
#include <string>
using namespace std;
Person::Person() {
    this->name = "";
    this->id = 0;
    this->password = "";
}
Person::Person(string name, int id, string password) {
   this->name = name;
   this->id = id;
   this->password = password;
}
void Person::SetName(string name) {
    this->name = name;
}
void Person::SetId(int id) {
    this->id = id;
}
void Person::SetPassword(string password) {
    this->password = password;
}
string Person::GetName() {
    return this->name;
}
int Person::GetId() {
    return this->id;
}
string Person::GetPassword() {
    return this->password;
}
void Person::print_info() {
<<<<<<< HEAD
    cout << "name: " << GetName() << endl;
    cout << "id: " << GetId() << endl;
    cout << "password: " << GetPassword() << endl;

=======
    cout << "name: " << name << endl;
    cout << "id: " << id << endl;
    cout << "password: " << password << endl;
>>>>>>> 189e6ae620b75f4a8c4ba32d62878cf00ca2e05c
}