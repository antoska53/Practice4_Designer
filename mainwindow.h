#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QIntValidator>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    QIntValidator* val;

private:
    Ui::MainWindow *ui;
signals:
    void mySignal(int);
public slots:
    void setEditChanged(QString);
private slots:
    void on_action_About_triggered();
};

#endif // MAINWINDOW_H
