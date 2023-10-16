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

    void lineNumberAreaPaintEvent(QPaintEvent *event);
    int lineNumberAreaWidth();

protected:
    //Save for virtual func
    //void resizeEvent(QResizeEvent *event) override;
    void resizeEvent(QResizeEvent *event);

private slots:
    void updateLineNumberAreaWidth(int newBlockCount);
    void highlightCurrentLine();
    void updateLineNumberArea(const QRect &rect, int dy);

private:
    QWidget *lineNumberArea;

};

#endif // CODEEDITOR_H
