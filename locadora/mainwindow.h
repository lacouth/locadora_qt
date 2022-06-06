#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <limits>
#include <QMainWindow>
#include <QMessageBox>
#include <map>
#include "filme.h"
#include "gerenciadorarquivo.h"

#include <iostream>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE


class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_gerar_cod_btn_clicked();

    void on_cadastrar_btn_clicked();

private:
    Ui::MainWindow *ui;
    Filme filme;
    std::map<string,Filme> cadastro;
    GerenciadorArquivo gerenciador_arquivo;

    void atualizar_tabela();

};
#endif // MAINWINDOW_H
