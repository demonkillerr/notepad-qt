#ifndef CODEEDITOR_H
#define CODEEDITOR_H

#include <QMainWindow>
#include <QObject>
#include <QWidget>

class CodeEditor : public QObject
{
    Q_OBJECT
public:
    explicit CodeEditor(QObject *parent = nullptr);


private:
    QWidget *lineNumberArea;

};

#endif // CODEEDITOR_H
