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

void Universidade ::setDepartamento(Departamento* pdpto, int qtd){
    Dpto[qtd]=pdpto;
}

void Universidade::imprimeDptos(){
    for(int i = 0; i<50; i++ ){
        if(Dpto[i] != NULL)
            cout << Dpto[i]->getNomeDpto() << endl;
    }
}
