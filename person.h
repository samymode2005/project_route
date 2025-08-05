#pragma once
#include <string>
using namespace std;

class Person {
protected:
    string name , password;
    int id;

public:
    //cons:
    Person();
    Person(string name, int id, string password);
    //setters:
    void SetName(string name);
    void SetId(int id);
    void SetPassword(string password);
    //getters:
    string GetName();
    int GetId();
    string GetPassword();
    // method:
    void print_info();
};

