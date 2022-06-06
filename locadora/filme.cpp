#include "filme.h"

const string &Filme::getTitulo() const
{
    return titulo;
}

bool Filme::setTitulo(const string &newTitulo)
{
    if(newTitulo.size() > 2){
        titulo = newTitulo;
        return true;
    }
    return false;
}

const string &Filme::getDiretor() const
{
    return diretor;
}

bool Filme::setDiretor(const string &newDiretor)
{
    if(newDiretor.size() > 2){
        diretor = newDiretor;
        return true;
    }
    return false;
}

const string &Filme::getGenero() const
{
    return genero;
}

void Filme::setGenero(const string &newGenero)
{
    genero = newGenero;
}

int Filme::getAno() const
{
    return ano;
}

bool Filme::setAno(int newAno)
{
    if(newAno > 0){
        ano = newAno;
        return true;
    }
    return false;
}

double Filme::getValor() const
{
    return valor;
}

bool Filme::setValor(double newValor)
{
    if(newValor > 0){
        valor = newValor;
        return true;
    }
    return false;
}

const string &Filme::getCod() const
{
    return cod;
}

bool Filme::getAlugado() const
{
    return alugado;
}

void Filme::setAlugado(bool newAlugado)
{
    alugado = newAlugado;
}

string Filme::gerar_codigo()
{
    srand(time(NULL));

    string temp = this->titulo;
    std::remove(temp.begin(),temp.end(),' ');

    int numero = (rand() % 5000) + 1;
    this->cod = temp.substr(0,3) + std::to_string(numero);

    return this->cod;

}

void Filme::setCod(const string &newCod)
{
    cod = newCod;
}

Filme::Filme()
{
    this->alugado = 0;
}
