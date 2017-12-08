#ifndef MYPICTURE_H
#define MYPICTURE_H

#include <QWidget>
#include <QPixmap>

class MyPicture : public QWidget
{
    Q_OBJECT
public:
    explicit MyPicture(QWidget *parent = nullptr);
    QPixmap pixmap;
    double scale = 1;
    QRect rectWid;
    virtual void paintEvent(QPaintEvent* event);

signals:
    void mySignalScaleChanged(QString);
public slots:
    void scaleChanged(int);
};

#endif // MYPICTURE_H
