#include "Universidade.h"
#include <string.h>
#include <iostream>
using std::cout;
using std::endl;


Universidade::Universidade(){
    for(int i = 0; i<50; i++){
        Dpto[i] = NULL;
    }
}

Universidade::~Universidade(){

}

void Universidade::setNome(const char* nome){
    strcpy(this->nome, nome);
}

char* Universidade::getNome(){
    return this->nome;
}

void Universidade ::setDepartamento(Departamento* pdpto){
    LpDptos.push_back(pdpto);
}

void Universidade::imprimeDptos(){
    int tam = (int) LpDptos.size();
    for(int i = 0; i < tam; i++){
        cout << (LpDptos[i])->getNomeDpto() << endl;
    }
}
