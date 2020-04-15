#include <string.h>
#include "Universidade.h"

class Pessoa {
    private:
        int dia, mes, ano, idade;
        char nome[30];
        Universidade* uni;

    public:
        Pessoa();
        Pessoa(int dia, int mes, int ano, char* nome );
        void inicializa(int dia, int mes, int ano, char* nome);
        void calcIdade(int dia, int mes, int ano);
        int getIdade();

        void setUni(Universidade* uni);
        void ondeTrabalho();
};