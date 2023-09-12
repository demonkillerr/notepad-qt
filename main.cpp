#include "mainwindow.h"
//Widgets/event-handling/mouse movements
#include <QApplication>
//Locale and Translation
#include <QLocale>
#include <QTranslator>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv); //This function calls the application object

    // This function handles translation
    QTranslator translator;
    const QStringList uiLanguages = QLocale::system().uiLanguages();
    for (const QString &locale : uiLanguages) {
        const QString baseName = "notepad-qt_" + QLocale(locale).name();
        if (translator.load(":/i18n/" + baseName)) {
            a.installTranslator(&translator);
            break;
        }
    }
    MainWindow w; //Create main application object
    w.show(); //Display app on screen
    return a.exec();
}
