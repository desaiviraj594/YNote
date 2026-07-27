/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionNew;
    QAction *actionOpen;
    QAction *actionSave;
    QAction *actionSave_As;
    QAction *actionPrint;
    QAction *actionPrint_Preview;
    QAction *actionExit;
    QAction *actionUndo;
    QAction *actionRedo;
    QAction *actionCut;
    QAction *actionCopy;
    QAction *actionPaste;
    QAction *actionBold;
    QAction *actionItalic;
    QAction *actionUnderline;
    QAction *actionLeft;
    QAction *actionRight;
    QAction *actionCenter;
    QAction *actionJustify;
    QAction *actionFont;
    QAction *actionColour;
    QAction *actionExport_as_PDF;
    QAction *actionImport_a_PDF;
    QAction *actionInfo;
    QWidget *centralwidget;
    QTextEdit *textEdit;
    QMenuBar *menubar;
    QMenu *menuFIle;
    QMenu *menuEdit;
    QMenu *menuFormat;
    QMenu *menuConverter;
    QMenu *menuHelp;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        MainWindow->setMinimumSize(QSize(800, 600));
        MainWindow->setMaximumSize(QSize(800, 600));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Resources/pencil-clipart-pencil.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        MainWindow->setWindowIcon(icon);
        actionNew = new QAction(MainWindow);
        actionNew->setObjectName("actionNew");
        QIcon icon1(QIcon::fromTheme(QIcon::ThemeIcon::DocumentNew));
        actionNew->setIcon(icon1);
        actionOpen = new QAction(MainWindow);
        actionOpen->setObjectName("actionOpen");
        QIcon icon2(QIcon::fromTheme(QIcon::ThemeIcon::DocumentOpen));
        actionOpen->setIcon(icon2);
        actionSave = new QAction(MainWindow);
        actionSave->setObjectName("actionSave");
        QIcon icon3(QIcon::fromTheme(QIcon::ThemeIcon::DocumentSave));
        actionSave->setIcon(icon3);
        actionSave_As = new QAction(MainWindow);
        actionSave_As->setObjectName("actionSave_As");
        QIcon icon4(QIcon::fromTheme(QIcon::ThemeIcon::DocumentSaveAs));
        actionSave_As->setIcon(icon4);
        actionPrint = new QAction(MainWindow);
        actionPrint->setObjectName("actionPrint");
        QIcon icon5(QIcon::fromTheme(QIcon::ThemeIcon::DocumentPrint));
        actionPrint->setIcon(icon5);
        actionPrint_Preview = new QAction(MainWindow);
        actionPrint_Preview->setObjectName("actionPrint_Preview");
        QIcon icon6(QIcon::fromTheme(QIcon::ThemeIcon::DocumentPrintPreview));
        actionPrint_Preview->setIcon(icon6);
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName("actionExit");
        QIcon icon7(QIcon::fromTheme(QIcon::ThemeIcon::ApplicationExit));
        actionExit->setIcon(icon7);
        actionUndo = new QAction(MainWindow);
        actionUndo->setObjectName("actionUndo");
        QIcon icon8(QIcon::fromTheme(QIcon::ThemeIcon::EditUndo));
        actionUndo->setIcon(icon8);
        actionRedo = new QAction(MainWindow);
        actionRedo->setObjectName("actionRedo");
        QIcon icon9(QIcon::fromTheme(QIcon::ThemeIcon::EditRedo));
        actionRedo->setIcon(icon9);
        actionCut = new QAction(MainWindow);
        actionCut->setObjectName("actionCut");
        QIcon icon10(QIcon::fromTheme(QIcon::ThemeIcon::EditCut));
        actionCut->setIcon(icon10);
        actionCopy = new QAction(MainWindow);
        actionCopy->setObjectName("actionCopy");
        QIcon icon11(QIcon::fromTheme(QIcon::ThemeIcon::EditCopy));
        actionCopy->setIcon(icon11);
        actionPaste = new QAction(MainWindow);
        actionPaste->setObjectName("actionPaste");
        QIcon icon12(QIcon::fromTheme(QIcon::ThemeIcon::EditPaste));
        actionPaste->setIcon(icon12);
        actionBold = new QAction(MainWindow);
        actionBold->setObjectName("actionBold");
        QIcon icon13;
        icon13.addFile(QString::fromUtf8(":/Resources/Bold.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionBold->setIcon(icon13);
        actionItalic = new QAction(MainWindow);
        actionItalic->setObjectName("actionItalic");
        QIcon icon14(QIcon::fromTheme(QIcon::ThemeIcon::FormatTextItalic));
        actionItalic->setIcon(icon14);
        actionUnderline = new QAction(MainWindow);
        actionUnderline->setObjectName("actionUnderline");
        QIcon icon15(QIcon::fromTheme(QIcon::ThemeIcon::FormatTextUnderline));
        actionUnderline->setIcon(icon15);
        actionLeft = new QAction(MainWindow);
        actionLeft->setObjectName("actionLeft");
        QIcon icon16(QIcon::fromTheme(QIcon::ThemeIcon::FormatJustifyLeft));
        actionLeft->setIcon(icon16);
        actionRight = new QAction(MainWindow);
        actionRight->setObjectName("actionRight");
        QIcon icon17(QIcon::fromTheme(QIcon::ThemeIcon::FormatJustifyRight));
        actionRight->setIcon(icon17);
        actionCenter = new QAction(MainWindow);
        actionCenter->setObjectName("actionCenter");
        QIcon icon18(QIcon::fromTheme(QIcon::ThemeIcon::FormatJustifyCenter));
        actionCenter->setIcon(icon18);
        actionJustify = new QAction(MainWindow);
        actionJustify->setObjectName("actionJustify");
        QIcon icon19;
        icon19.addFile(QString::fromUtf8(":/Resources/document.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionJustify->setIcon(icon19);
        actionFont = new QAction(MainWindow);
        actionFont->setObjectName("actionFont");
        QIcon icon20;
        icon20.addFile(QString::fromUtf8(":/Resources/Untitled.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionFont->setIcon(icon20);
        actionColour = new QAction(MainWindow);
        actionColour->setObjectName("actionColour");
        QIcon icon21;
        icon21.addFile(QString::fromUtf8(":/Resources/color-wheel.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionColour->setIcon(icon21);
        actionExport_as_PDF = new QAction(MainWindow);
        actionExport_as_PDF->setObjectName("actionExport_as_PDF");
        QIcon icon22(QIcon::fromTheme(QIcon::ThemeIcon::MailSend));
        actionExport_as_PDF->setIcon(icon22);
        actionImport_a_PDF = new QAction(MainWindow);
        actionImport_a_PDF->setObjectName("actionImport_a_PDF");
        QIcon icon23(QIcon::fromTheme(QIcon::ThemeIcon::GoDown));
        actionImport_a_PDF->setIcon(icon23);
        actionInfo = new QAction(MainWindow);
        actionInfo->setObjectName("actionInfo");
        QIcon icon24(QIcon::fromTheme(QIcon::ThemeIcon::DialogInformation));
        actionInfo->setIcon(icon24);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName("textEdit");
        textEdit->setGeometry(QRect(10, 0, 781, 501));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 29));
        QFont font;
        font.setFamilies({QString::fromUtf8("Segoe UI")});
        font.setPointSize(11);
        font.setBold(false);
        menubar->setFont(font);
        menuFIle = new QMenu(menubar);
        menuFIle->setObjectName("menuFIle");
        menuEdit = new QMenu(menubar);
        menuEdit->setObjectName("menuEdit");
        menuFormat = new QMenu(menubar);
        menuFormat->setObjectName("menuFormat");
        menuConverter = new QMenu(menubar);
        menuConverter->setObjectName("menuConverter");
        menuHelp = new QMenu(menubar);
        menuHelp->setObjectName("menuHelp");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName("toolBar");
        MainWindow->addToolBar(Qt::ToolBarArea::TopToolBarArea, toolBar);

        menubar->addAction(menuFIle->menuAction());
        menubar->addAction(menuEdit->menuAction());
        menubar->addAction(menuFormat->menuAction());
        menubar->addAction(menuConverter->menuAction());
        menubar->addAction(menuHelp->menuAction());
        menuFIle->addSeparator();
        menuFIle->addAction(actionNew);
        menuFIle->addAction(actionOpen);
        menuFIle->addAction(actionSave);
        menuFIle->addAction(actionSave_As);
        menuFIle->addSeparator();
        menuFIle->addAction(actionPrint);
        menuFIle->addAction(actionPrint_Preview);
        menuFIle->addSeparator();
        menuFIle->addAction(actionExit);
        menuEdit->addAction(actionUndo);
        menuEdit->addAction(actionRedo);
        menuEdit->addSeparator();
        menuEdit->addAction(actionCut);
        menuEdit->addAction(actionCopy);
        menuEdit->addAction(actionPaste);
        menuFormat->addAction(actionBold);
        menuFormat->addAction(actionItalic);
        menuFormat->addAction(actionUnderline);
        menuFormat->addSeparator();
        menuFormat->addAction(actionLeft);
        menuFormat->addAction(actionRight);
        menuFormat->addAction(actionCenter);
        menuFormat->addAction(actionJustify);
        menuFormat->addSeparator();
        menuFormat->addAction(actionFont);
        menuFormat->addAction(actionColour);
        menuConverter->addAction(actionExport_as_PDF);
        menuConverter->addAction(actionImport_a_PDF);
        menuHelp->addAction(actionInfo);
        toolBar->addAction(actionNew);
        toolBar->addAction(actionOpen);
        toolBar->addAction(actionSave);
        toolBar->addAction(actionSave_As);
        toolBar->addSeparator();
        toolBar->addAction(actionPrint);
        toolBar->addAction(actionPrint_Preview);
        toolBar->addSeparator();
        toolBar->addAction(actionExport_as_PDF);
        toolBar->addAction(actionImport_a_PDF);
        toolBar->addSeparator();
        toolBar->addAction(actionFont);
        toolBar->addAction(actionColour);
        toolBar->addAction(actionRight);
        toolBar->addAction(actionLeft);
        toolBar->addAction(actionCenter);
        toolBar->addAction(actionUndo);
        toolBar->addAction(actionRedo);
        toolBar->addAction(actionBold);
        toolBar->addAction(actionItalic);
        toolBar->addAction(actionUnderline);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Text-Editor", nullptr));
        actionNew->setText(QCoreApplication::translate("MainWindow", "New", nullptr));
#if QT_CONFIG(shortcut)
        actionNew->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+N", nullptr));
#endif // QT_CONFIG(shortcut)
        actionOpen->setText(QCoreApplication::translate("MainWindow", "Open", nullptr));
#if QT_CONFIG(shortcut)
        actionOpen->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+O", nullptr));
#endif // QT_CONFIG(shortcut)
        actionSave->setText(QCoreApplication::translate("MainWindow", "Save", nullptr));
#if QT_CONFIG(shortcut)
        actionSave->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+S", nullptr));
#endif // QT_CONFIG(shortcut)
        actionSave_As->setText(QCoreApplication::translate("MainWindow", "Save As", nullptr));
#if QT_CONFIG(shortcut)
        actionSave_As->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Shift+S", nullptr));
#endif // QT_CONFIG(shortcut)
        actionPrint->setText(QCoreApplication::translate("MainWindow", "Print", nullptr));
#if QT_CONFIG(shortcut)
        actionPrint->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+P", nullptr));
#endif // QT_CONFIG(shortcut)
        actionPrint_Preview->setText(QCoreApplication::translate("MainWindow", "Print Preview", nullptr));
#if QT_CONFIG(shortcut)
        actionPrint_Preview->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Shift+P", nullptr));
#endif // QT_CONFIG(shortcut)
        actionExit->setText(QCoreApplication::translate("MainWindow", "Exit", nullptr));
#if QT_CONFIG(shortcut)
        actionExit->setShortcut(QCoreApplication::translate("MainWindow", "Esc", nullptr));
#endif // QT_CONFIG(shortcut)
        actionUndo->setText(QCoreApplication::translate("MainWindow", "Undo", nullptr));
#if QT_CONFIG(shortcut)
        actionUndo->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Z", nullptr));
#endif // QT_CONFIG(shortcut)
        actionRedo->setText(QCoreApplication::translate("MainWindow", "Redo", nullptr));
        actionCut->setText(QCoreApplication::translate("MainWindow", "Cut", nullptr));
        actionCopy->setText(QCoreApplication::translate("MainWindow", "Copy", nullptr));
#if QT_CONFIG(shortcut)
        actionCopy->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+C", nullptr));
#endif // QT_CONFIG(shortcut)
        actionPaste->setText(QCoreApplication::translate("MainWindow", "Paste", nullptr));
#if QT_CONFIG(shortcut)
        actionPaste->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+X", nullptr));
#endif // QT_CONFIG(shortcut)
        actionBold->setText(QCoreApplication::translate("MainWindow", "Bold", nullptr));
#if QT_CONFIG(shortcut)
        actionBold->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+B", nullptr));
#endif // QT_CONFIG(shortcut)
        actionItalic->setText(QCoreApplication::translate("MainWindow", "Italic", nullptr));
#if QT_CONFIG(shortcut)
        actionItalic->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+I", nullptr));
#endif // QT_CONFIG(shortcut)
        actionUnderline->setText(QCoreApplication::translate("MainWindow", "Underline", nullptr));
#if QT_CONFIG(shortcut)
        actionUnderline->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+U", nullptr));
#endif // QT_CONFIG(shortcut)
        actionLeft->setText(QCoreApplication::translate("MainWindow", "Left", nullptr));
        actionRight->setText(QCoreApplication::translate("MainWindow", "Right", nullptr));
        actionCenter->setText(QCoreApplication::translate("MainWindow", "Center", nullptr));
        actionJustify->setText(QCoreApplication::translate("MainWindow", "Justify", nullptr));
        actionFont->setText(QCoreApplication::translate("MainWindow", "Font", nullptr));
        actionColour->setText(QCoreApplication::translate("MainWindow", "Colour", nullptr));
        actionExport_as_PDF->setText(QCoreApplication::translate("MainWindow", "Export as PDF", nullptr));
        actionImport_a_PDF->setText(QCoreApplication::translate("MainWindow", "Import a PDF", nullptr));
        actionInfo->setText(QCoreApplication::translate("MainWindow", "Info", nullptr));
        menuFIle->setTitle(QCoreApplication::translate("MainWindow", "FIle", nullptr));
        menuEdit->setTitle(QCoreApplication::translate("MainWindow", "Edit", nullptr));
        menuFormat->setTitle(QCoreApplication::translate("MainWindow", "Format", nullptr));
        menuConverter->setTitle(QCoreApplication::translate("MainWindow", "Converter", nullptr));
        menuHelp->setTitle(QCoreApplication::translate("MainWindow", "Help", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
