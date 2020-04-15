#include <string.h>

class Pessoa {
    private:
        int dia;
        int mes;
        int ano;
        int idade;
        char nome[30];

    public:
        Pessoa();
        Pessoa(int dia, int mes, int ano, char* nome);
        void inicializa(int dia, int mes, int ano, char* nome);
        void calcIdade(int dia, int mes, int ano);
        int getIdade();
};