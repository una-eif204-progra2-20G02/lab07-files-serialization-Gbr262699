//
// Created by Gaston on 11/10/2020.
//

#ifndef MY_PROJECT_NAME_ISAVEPERSO_H
#define MY_PROJECT_NAME_ISAVEPERSO_H
#include <sstream>
using namespace std;

class IsavePerso

public:
    virtual ~ISaveTexPerson();

    virtual string saveDataTex() = 0;
};




#endif //MY_PROJECT_NAME_ISAVEPERSO_H
