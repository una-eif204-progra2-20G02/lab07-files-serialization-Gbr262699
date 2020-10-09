
#ifndef MY_PROJECT_NAME_PERSONVEC_H
#define MY_PROJECT_NAME_PERSONVEC_H
#include "Person.h"
#include <vector>

class PersonVec {

private:
    vector<Person> Per;
public:
    void addPerson(Person);

    int size();

    string toString();

    ~PersonVec();

    Person getPerson(int position);

    PersonVec(vector<struct Person> vector);

    PersonVec();
};





#endif //MY_PROJECT_NAME_PERSONVEC_H
