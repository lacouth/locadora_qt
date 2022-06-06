/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.0.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QTabWidget *tabWidget;
    QWidget *tab;
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QComboBox *genero_cb;
    QSpacerItem *verticalSpacer_4;
    QLineEdit *diretor_edit;
    QLabel *label_2;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer;
    QDoubleSpinBox *valor_box;
    QLabel *label_6;
    QLineEdit *titulo_edit;
    QSpacerItem *verticalSpacer_3;
    QLineEdit *codigo_edit;
    QLabel *label_4;
    QLabel *label_5;
    QSpacerItem *verticalSpacer_5;
    QPushButton *gerar_cod_btn;
    QLabel *label_7;
    QPushButton *cadastrar_btn;
    QSpacerItem *verticalSpacer;
    QSpacerItem *verticalSpacer_2;
    QLineEdit *ano_edit;
    QLabel *mensagem_label;
    QWidget *tab_2;
    QWidget *gridLayoutWidget_2;
    QHBoxLayout *horizontalLayout;
    QTableWidget *filmes_table;
    QWidget *tab_3;
    QWidget *tab_4;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(957, 524);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setEnabled(true);
        verticalLayout_2 = new QVBoxLayout(centralwidget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setFamily(QString::fromUtf8("JetBrains Mono"));
        font.setPointSize(48);
        font.setBold(true);
        font.setItalic(true);
        font.setUnderline(false);
        font.setStrikeOut(false);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("color: rgb(237, 51, 59);"));
        label->setScaledContents(true);
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        gridLayout_2 = new QGridLayout(tab);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        genero_cb = new QComboBox(tab);
        genero_cb->addItem(QString());
        genero_cb->addItem(QString());
        genero_cb->addItem(QString());
        genero_cb->addItem(QString());
        genero_cb->addItem(QString());
        genero_cb->setObjectName(QString::fromUtf8("genero_cb"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(genero_cb->sizePolicy().hasHeightForWidth());
        genero_cb->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(genero_cb, 3, 2, 1, 1);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_4, 6, 2, 1, 1);

        diretor_edit = new QLineEdit(tab);
        diretor_edit->setObjectName(QString::fromUtf8("diretor_edit"));

        gridLayout->addWidget(diretor_edit, 1, 5, 1, 2);

        label_2 = new QLabel(tab);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QFont font1;
        font1.setPointSize(13);
        label_2->setFont(font1);

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        label_3 = new QLabel(tab);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font1);

        gridLayout->addWidget(label_3, 1, 4, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 3, 1, 1);

        valor_box = new QDoubleSpinBox(tab);
        valor_box->setObjectName(QString::fromUtf8("valor_box"));
        valor_box->setValue(1.000000000000000);

        gridLayout->addWidget(valor_box, 5, 2, 1, 1);

        label_6 = new QLabel(tab);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setFont(font1);

        gridLayout->addWidget(label_6, 3, 4, 1, 1);

        titulo_edit = new QLineEdit(tab);
        titulo_edit->setObjectName(QString::fromUtf8("titulo_edit"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(1);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(titulo_edit->sizePolicy().hasHeightForWidth());
        titulo_edit->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(titulo_edit, 1, 2, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_3, 4, 2, 1, 1);

        codigo_edit = new QLineEdit(tab);
        codigo_edit->setObjectName(QString::fromUtf8("codigo_edit"));
        codigo_edit->setEnabled(false);

        gridLayout->addWidget(codigo_edit, 5, 5, 1, 1);

        label_4 = new QLabel(tab);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font1);

        gridLayout->addWidget(label_4, 3, 0, 1, 1);

        label_5 = new QLabel(tab);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFont(font1);

        gridLayout->addWidget(label_5, 5, 0, 1, 1);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_5, 8, 5, 1, 1);

        gerar_cod_btn = new QPushButton(tab);
        gerar_cod_btn->setObjectName(QString::fromUtf8("gerar_cod_btn"));

        gridLayout->addWidget(gerar_cod_btn, 5, 6, 1, 1);

        label_7 = new QLabel(tab);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setFont(font1);

        gridLayout->addWidget(label_7, 5, 4, 1, 1);

        cadastrar_btn = new QPushButton(tab);
        cadastrar_btn->setObjectName(QString::fromUtf8("cadastrar_btn"));
        cadastrar_btn->setEnabled(false);

        gridLayout->addWidget(cadastrar_btn, 7, 5, 1, 2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 2, 2, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 0, 2, 1, 1);

        ano_edit = new QLineEdit(tab);
        ano_edit->setObjectName(QString::fromUtf8("ano_edit"));

        gridLayout->addWidget(ano_edit, 3, 5, 1, 2);

        mensagem_label = new QLabel(tab);
        mensagem_label->setObjectName(QString::fromUtf8("mensagem_label"));
        QFont font2;
        font2.setPointSize(15);
        font2.setBold(true);
        mensagem_label->setFont(font2);
        mensagem_label->setStyleSheet(QString::fromUtf8("color: rgb(224, 27, 36);"));
        mensagem_label->setAlignment(Qt::AlignCenter);
        mensagem_label->setWordWrap(true);

        gridLayout->addWidget(mensagem_label, 8, 2, 1, 3);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        gridLayoutWidget_2 = new QWidget(tab_2);
        gridLayoutWidget_2->setObjectName(QString::fromUtf8("gridLayoutWidget_2"));
        gridLayoutWidget_2->setGeometry(QRect(9, 9, 911, 311));
        horizontalLayout = new QHBoxLayout(gridLayoutWidget_2);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        filmes_table = new QTableWidget(gridLayoutWidget_2);
        if (filmes_table->columnCount() < 6)
            filmes_table->setColumnCount(6);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        filmes_table->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        filmes_table->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        filmes_table->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        filmes_table->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        filmes_table->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        filmes_table->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        filmes_table->setObjectName(QString::fromUtf8("filmes_table"));
        filmes_table->setAutoFillBackground(false);
        filmes_table->setSortingEnabled(true);
        filmes_table->horizontalHeader()->setVisible(true);
        filmes_table->horizontalHeader()->setCascadingSectionResizes(true);
        filmes_table->horizontalHeader()->setDefaultSectionSize(150);
        filmes_table->horizontalHeader()->setStretchLastSection(true);

        horizontalLayout->addWidget(filmes_table);

        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        tabWidget->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QString::fromUtf8("tab_4"));
        tabWidget->addTab(tab_4, QString());

        verticalLayout->addWidget(tabWidget);


        verticalLayout_2->addLayout(verticalLayout);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 957, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);
        QWidget::setTabOrder(titulo_edit, diretor_edit);
        QWidget::setTabOrder(diretor_edit, genero_cb);
        QWidget::setTabOrder(genero_cb, ano_edit);
        QWidget::setTabOrder(ano_edit, valor_box);
        QWidget::setTabOrder(valor_box, gerar_cod_btn);
        QWidget::setTabOrder(gerar_cod_btn, cadastrar_btn);
        QWidget::setTabOrder(cadastrar_btn, codigo_edit);
        QWidget::setTabOrder(codigo_edit, tabWidget);
        QWidget::setTabOrder(tabWidget, filmes_table);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "QtLocadora", nullptr));
        genero_cb->setItemText(0, QCoreApplication::translate("MainWindow", "Com\303\251dia", nullptr));
        genero_cb->setItemText(1, QCoreApplication::translate("MainWindow", "Fic\303\247\303\243o Cient\303\255fica", nullptr));
        genero_cb->setItemText(2, QCoreApplication::translate("MainWindow", "Drama", nullptr));
        genero_cb->setItemText(3, QCoreApplication::translate("MainWindow", "Terror", nullptr));
        genero_cb->setItemText(4, QCoreApplication::translate("MainWindow", "A\303\247\303\243o", nullptr));

        label_2->setText(QCoreApplication::translate("MainWindow", "T\303\255tulo:", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Diretor:", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "ano:", nullptr));
        titulo_edit->setText(QString());
        label_4->setText(QCoreApplication::translate("MainWindow", "g\303\252nero:", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Valor:", nullptr));
        gerar_cod_btn->setText(QCoreApplication::translate("MainWindow", "Gerar", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "C\303\263digo", nullptr));
        cadastrar_btn->setText(QCoreApplication::translate("MainWindow", "Cadastrar", nullptr));
        mensagem_label->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("MainWindow", "Cadastro", nullptr));
        QTableWidgetItem *___qtablewidgetitem = filmes_table->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("MainWindow", "C\303\263digo", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = filmes_table->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("MainWindow", "T\303\255tulo", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = filmes_table->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("MainWindow", "Diretor", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = filmes_table->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("MainWindow", "Ano", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = filmes_table->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("MainWindow", "Pre\303\247o", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = filmes_table->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("MainWindow", "Situa\303\247\303\243o", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("MainWindow", "Lista de Filmes", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QCoreApplication::translate("MainWindow", "Alugar", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QCoreApplication::translate("MainWindow", "Devolu\303\247\303\243o", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
