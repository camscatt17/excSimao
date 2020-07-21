#include "Universidade.h"
#include <string.h>

Universidade::Universidade(const char* nome){
    strcpy(this->nome, nome);
}

Universidade::~Universidade(){

}

void Universidade::setNome(const char* nome){
    strcpy(this->nome, nome);
}

char* Universidade::getNome(){
    return this->nome;
}