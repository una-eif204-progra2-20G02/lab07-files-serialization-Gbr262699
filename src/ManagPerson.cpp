//
// Created by Gaston on 9/10/2020.
//

#include "ManagPerson.h"

void PersonManager::saveText(ISaveTexPerson* savePerson) {
    ofstream archivo;
    try { archivo.open("ArchivoTexto.json", ios::binary); }
    catch (ifstream::failure a) {
        cout << "no se pudo abrir el archivo";
        exit(1);
    }

    archivo << savePerson << '\n';
}

string PersonManager::readText() {
    ifstream archivo;
    string texto;
    try { archivo.open("ArchivoTexto.json", ios::in); }
    catch (std::ifstream::failure a) {
        cout << "no se pudo abrir el archivo";
        exit(1);
    }
    cout << endl;
    while (!archivo.eof()) {
        getline(archivo, texto);
        cout << texto << endl;
    }
    archivo.close();
}

void PersonManager::saveBinary(PersonList* savePerson) {
    ofstream archivo;

    try { archivo.open("ArchivoBinario.dat", ios::app | ios::binary); }

    catch (std::ifstream::failure a) { cout << "no se logro abrir el archivo"; }

    archivo.write((char *) &savePerson, sizeof(PersonList));

    archivo.close();

}

void PersonManager::loadBinary(PersonList* savePerson) {
    ifstream archivo;

    try { archivo.open("ArchivoBinario.dat", ios::in | ios::binary); }

    catch (std::ifstream::failure a) {
        cout << "no se logro abrir el archivo";
        exit(1);
    }

    archivo.read((char *) &savePerson, sizeof(PersonList));

    archivo.close();