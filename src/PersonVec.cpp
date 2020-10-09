

#include "PersonVec.h"

Person::Person(string name,int age,int id) :name(name)),age(age),id(id) {}

int Person::getId() const {
    return id;
}

void Person::setId(int id) {
    Person::id = id;
}

int Person::getAge() const {
    return age;
}

void Person::setAge(int age) {
    Person::age = age;
}

const string &Person::getName() const {
    return name;
}

void Person::setName(const string &name) {
    Person::name = name;
}

string Person::toString() const {
    ostringstream output;

    output<<"Name: " << getName() <<
    "\nAge: " << getAge() <<
    "\nID: " << getId();

    return output.str();
}

Person::Person() = default;

Person::~Person() = default;
