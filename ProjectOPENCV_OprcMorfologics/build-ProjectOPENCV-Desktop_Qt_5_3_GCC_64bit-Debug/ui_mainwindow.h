/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *label;
    QLabel *label_2;
    QFrame *line;
    QLabel *label_3;
    QLabel *label_4;
    QFrame *line_2;
    QFrame *line_3;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QRadioButton *dillat;
    QRadioButton *erosao;
    QRadioButton *abertura;
    QRadioButton *fecho;
    QRadioButton *gradient;
    QRadioButton *top;
    QRadioButton *black;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_2;
    QRadioButton *quadrado;
    QRadioButton *rect;
    QRadioButton *cruz;
    QRadioButton *elipse;
    QRadioButton *circulo;
    QSlider *slider;
    QLCDNumber *lcdNumber;
    QFrame *line_4;
    QLabel *label_5;
    QFrame *line_5;
    QPushButton *pushButton;
    QPushButton *pushButton_3;
    QLabel *lbBinText;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *lbOrigem;
    QLabel *lbBin;
    QLabel *lbDestino;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1344, 709);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 500, 111, 21));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(900, 500, 161, 21));
        line = new QFrame(centralWidget);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(10, 520, 1331, 16));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(30, 540, 191, 21));
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(30, 580, 191, 21));
        line_2 = new QFrame(centralWidget);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setGeometry(QRect(10, 560, 981, 16));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        line_3 = new QFrame(centralWidget);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setGeometry(QRect(210, 530, 16, 81));
        line_3->setFrameShape(QFrame::VLine);
        line_3->setFrameShadow(QFrame::Sunken);
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(230, 540, 740, 28));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        dillat = new QRadioButton(layoutWidget);
        dillat->setObjectName(QStringLiteral("dillat"));
        dillat->setEnabled(true);
        dillat->setChecked(true);

        horizontalLayout->addWidget(dillat);

        erosao = new QRadioButton(layoutWidget);
        erosao->setObjectName(QStringLiteral("erosao"));

        horizontalLayout->addWidget(erosao);

        abertura = new QRadioButton(layoutWidget);
        abertura->setObjectName(QStringLiteral("abertura"));

        horizontalLayout->addWidget(abertura);

        fecho = new QRadioButton(layoutWidget);
        fecho->setObjectName(QStringLiteral("fecho"));

        horizontalLayout->addWidget(fecho);

        gradient = new QRadioButton(layoutWidget);
        gradient->setObjectName(QStringLiteral("gradient"));

        horizontalLayout->addWidget(gradient);

        top = new QRadioButton(layoutWidget);
        top->setObjectName(QStringLiteral("top"));
        top->setStyleSheet(QStringLiteral("font: italic 11pt \"Cantarell\";"));

        horizontalLayout->addWidget(top);

        black = new QRadioButton(layoutWidget);
        black->setObjectName(QStringLiteral("black"));
        black->setStyleSheet(QStringLiteral("font: italic 11pt \"Cantarell\";"));

        horizontalLayout->addWidget(black);

        layoutWidget1 = new QWidget(centralWidget);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(230, 580, 741, 31));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        quadrado = new QRadioButton(layoutWidget1);
        quadrado->setObjectName(QStringLiteral("quadrado"));
        quadrado->setCheckable(true);
        quadrado->setChecked(true);

        horizontalLayout_2->addWidget(quadrado);

        rect = new QRadioButton(layoutWidget1);
        rect->setObjectName(QStringLiteral("rect"));
        rect->setCheckable(true);
        rect->setChecked(false);
        rect->setAutoExclusive(true);

        horizontalLayout_2->addWidget(rect);

        cruz = new QRadioButton(layoutWidget1);
        cruz->setObjectName(QStringLiteral("cruz"));

        horizontalLayout_2->addWidget(cruz);

        elipse = new QRadioButton(layoutWidget1);
        elipse->setObjectName(QStringLiteral("elipse"));

        horizontalLayout_2->addWidget(elipse);

        circulo = new QRadioButton(layoutWidget1);
        circulo->setObjectName(QStringLiteral("circulo"));

        horizontalLayout_2->addWidget(circulo);

        slider = new QSlider(layoutWidget1);
        slider->setObjectName(QStringLiteral("slider"));
        slider->setMinimum(1);
        slider->setMaximum(30);
        slider->setSingleStep(3);
        slider->setPageStep(9);
        slider->setValue(15);
        slider->setSliderPosition(15);
        slider->setOrientation(Qt::Horizontal);

        horizontalLayout_2->addWidget(slider);

        lcdNumber = new QLCDNumber(layoutWidget1);
        lcdNumber->setObjectName(QStringLiteral("lcdNumber"));
        QFont font;
        font.setPointSize(17);
        font.setBold(true);
        font.setWeight(75);
        lcdNumber->setFont(font);
        lcdNumber->setAutoFillBackground(true);
        lcdNumber->setStyleSheet(QStringLiteral(""));
        lcdNumber->setInputMethodHints(Qt::ImhNone);
        lcdNumber->setProperty("intValue", QVariant(15));

        horizontalLayout_2->addWidget(lcdNumber);

        line_4 = new QFrame(centralWidget);
        line_4->setObjectName(QStringLiteral("line_4"));
        line_4->setGeometry(QRect(980, 540, 20, 81));
        line_4->setFrameShape(QFrame::VLine);
        line_4->setFrameShadow(QFrame::Sunken);
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(1000, 540, 141, 21));
        line_5 = new QFrame(centralWidget);
        line_5->setObjectName(QStringLiteral("line_5"));
        line_5->setGeometry(QRect(10, 610, 1331, 20));
        line_5->setFrameShape(QFrame::HLine);
        line_5->setFrameShadow(QFrame::Sunken);
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(1010, 570, 141, 31));
        pushButton_3 = new QPushButton(centralWidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(1170, 570, 111, 31));
        lbBinText = new QLabel(centralWidget);
        lbBinText->setObjectName(QStringLiteral("lbBinText"));
        lbBinText->setGeometry(QRect(440, 500, 171, 20));
        layoutWidget2 = new QWidget(centralWidget);
        layoutWidget2->setObjectName(QStringLiteral("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(0, 0, 1341, 501));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        lbOrigem = new QLabel(layoutWidget2);
        lbOrigem->setObjectName(QStringLiteral("lbOrigem"));
        lbOrigem->setAutoFillBackground(true);

        horizontalLayout_3->addWidget(lbOrigem);

        lbBin = new QLabel(layoutWidget2);
        lbBin->setObjectName(QStringLiteral("lbBin"));
        lbBin->setAutoFillBackground(true);

        horizontalLayout_3->addWidget(lbBin);

        lbDestino = new QLabel(layoutWidget2);
        lbDestino->setObjectName(QStringLiteral("lbDestino"));
        lbDestino->setAutoFillBackground(true);

        horizontalLayout_3->addWidget(lbDestino);

        MainWindow->setCentralWidget(centralWidget);
        layoutWidget->raise();
        label->raise();
        label_2->raise();
        line->raise();
        label_3->raise();
        label_4->raise();
        line_2->raise();
        line_3->raise();
        layoutWidget->raise();
        layoutWidget->raise();
        line_4->raise();
        label_5->raise();
        line_5->raise();
        pushButton->raise();
        pushButton_3->raise();
        lbBinText->raise();
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1344, 27));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);
        QObject::connect(slider, SIGNAL(valueChanged(int)), lcdNumber, SLOT(display(int)));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        label->setText(QApplication::translate("MainWindow", "Imagem original", 0));
        label_2->setText(QApplication::translate("MainWindow", "Imagem resultado", 0));
        label_3->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:600;\">Opera\303\247\303\243o Morfologica</span></p></body></html>", 0));
        label_4->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:600;\">Elemento Estruturante</span></p></body></html>", 0));
        dillat->setText(QApplication::translate("MainWindow", "Dilata\303\247\303\243o", 0));
        erosao->setText(QApplication::translate("MainWindow", "Eros\303\243o", 0));
        abertura->setText(QApplication::translate("MainWindow", "Abertura", 0));
        fecho->setText(QApplication::translate("MainWindow", "Fecho", 0));
        gradient->setText(QApplication::translate("MainWindow", "Gradiente", 0));
        top->setText(QApplication::translate("MainWindow", "Top Hat", 0));
        black->setText(QApplication::translate("MainWindow", "Black Hat", 0));
        quadrado->setText(QApplication::translate("MainWindow", "Quadrado", 0));
        rect->setText(QApplication::translate("MainWindow", "Rectangulo", 0));
        cruz->setText(QApplication::translate("MainWindow", "Cruz", 0));
        elipse->setText(QApplication::translate("MainWindow", "Eclipse ", 0));
        circulo->setText(QApplication::translate("MainWindow", "Circulo", 0));
        label_5->setText(QApplication::translate("MainWindow", "Escolher input:", 0));
        pushButton->setText(QApplication::translate("MainWindow", "Carregar Imagem", 0));
        pushButton_3->setText(QApplication::translate("MainWindow", "WebCam", 0));
        lbBinText->setText(QString());
        lbOrigem->setText(QString());
        lbBin->setText(QString());
        lbDestino->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
