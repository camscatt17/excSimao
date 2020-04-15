#include <iostream>
#include <string.h>
#include "Universidade.h"

Universidade::Universidade(){
    inicializa("");
}

Universidade::Universidade(char* nome){
    inicializa(nome);
}

Universidade::~Universidade(){
}

void Universidade::inicializa(char* nome){
    strcpy(this->nome, nome);
}

void Universidade::setNome(char* nome){
    strcpy(this->nome, nome);
}

char* Universidade::getNome(){
    return nome;
}