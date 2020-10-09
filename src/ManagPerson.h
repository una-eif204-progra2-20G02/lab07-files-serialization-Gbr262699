//
// Created by Gaston on 9/10/2020.
//

#ifndef MY_PROJECT_NAME_MANAGPERSON_H
#define MY_PROJECT_NAME_MANAGPERSON_H
#include <iostream>
#include "ISaveTexPerson.h"
//#include "PersonList.h"



class ManagPerson {

    public:
        void saveText(ISaveTexPerson* savePerson);
        std::string readText();
        void saveBinary(PersonList* savePerson);
        void loadBinary(PersonList* savePerson);
    };

};


#endif //MY_PROJECT_NAME_MANAGPERSON_H
