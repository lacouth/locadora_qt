#ifndef FILME_H
#define FILME_H

#include <string>
#include <algorithm>

using std::string;

class Filme
{
private:
    string titulo;
    string diretor;
    string genero;
    int ano;
    double valor;
    string cod;
    bool alugado;
public:
    Filme();
    const string &getTitulo() const;
    bool setTitulo(const string &newTitulo);
    const string &getDiretor() const;
    bool setDiretor(const string &newDiretor);
    const string &getGenero() const;
    void setGenero(const string &newGenero);
    int getAno() const;
    bool setAno(int newAno);
    double getValor() const;
    bool setValor(double newValor);
    const string &getCod() const;
    bool getAlugado() const;
    void setAlugado(bool newAlugado);
    string gerar_codigo();
    void setCod(const string &newCod);
};

#endif // FILME_H
