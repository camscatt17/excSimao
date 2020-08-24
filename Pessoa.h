#pragma once
#include <iostream>
#include "Universidade.h"
#include "Departamento.h"
 
class Pessoa{
    protected:
        int dia, mes, ano, idade;
        char nome[30];
        Universidade* pUni; //cria a associação (tpo de relação mais fraca)
        Departamento* pDpto;

    public:
        Pessoa();
        ~Pessoa();
        Pessoa(int dia, int mes, int ano, const char* nome);
        void inicializa(int dia, int mes, int ano, const char* nome);
        void calcIdade(int dia, int mes, int ano);
        int getIdade();

        //inicializa o ponteiro e permite a passagem do endereço
        void setUni(Universidade* pUni);
        void ondeTrabalha();

        //agregação da classe Dpto
        void setDpto(Departamento* pDpto);
        void DptoOndeTrabalha();
};

