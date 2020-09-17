#include "Pessoa.h"
#include <string.h>
#include <iostream>
using std::cout;
using std::endl;

Pessoa::Pessoa(){
    inicializa(0,0,0, "");
}

Pessoa::Pessoa(int dia, int mes, int ano, const char* nome){
    inicializa(dia, mes, ano, nome);
}

Pessoa::~Pessoa(){
    
}

void Pessoa::inicializa(int dia, int mes, int ano, const char* nome){
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

    cout << "A idade de "<< this->nome << ": " << idade << endl;
}

int Pessoa::getIdade(){
    return idade;
}

void Pessoa::setNome(cont char* nome){
    this->nome = nome;
}

char* Pessoa::getNome(){
    return nome;
}

void Pessoa::setUni(Universidade* pUni){
    this->pUni = pUni;
}

void Pessoa::ondeTrabalha(){
    cout << this->nome << " trabalha em " << this->pUni->getNome() << endl;
}

void Pessoa::setDpto(Departamento* pDpto){
    this->pDpto = pDpto;
}

void Pessoa::DptoOndeTrabalha() {
    cout << this->nome << " trabalha no Dpto " << this->pDpto->getNomeDpto() << endl;
}
