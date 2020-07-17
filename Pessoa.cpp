#include "Pessoa.h"
#include <iostream>
using std::cout;
using std::endl;

Pessoa::Pessoa(){
    inicializa(0,0,0, "");
}

Pessoa::Pessoa(int dia, int mes, int ano, char* nome){
    inicializa(dia, mes, ano, nome);
}

void Pessoa::inicializa(int dia, int mes, int ano, char* nome){
    this->dia = dia;
    this->mes = mes;
    this->ano = ano;
    strcpy(this->nome, nome);
}

void Pessoa::calcIdade(int dia, int mes, int ano){
    idade = ano - this->ano;
    if(this->mes > mes)
        idade--;
    else{
        if(this->mes == mes){
            if(this->dia > dia)
                idade--;
        }
    }

    cout << "A idade da Pessoa "<< this->nome << " seria " << idade << endl;
}

int Pessoa::getIdade(){
    return idade;
}
