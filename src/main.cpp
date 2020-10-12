

#include "IsavePerso.h"
#include "ManagPerson.h"

int main(){
    Person person1 = {"Gaston", 20, 30};
    Person person2 = {"Maryfer", 21, 30};
    Person person3 = {"Laura", 80, 12};

    PersonList *personList = new PersonList();
    personList->inset(person1);
    personList->inset(person2);
    personList->inset(person3);

    ISaveTexPerson* personTex = personList;

    PersonManager manager;
    manager.saveText(personTex);
    manager.saveBinary(personList);
    manager.loadBinary(personList);

    return 0;
}
