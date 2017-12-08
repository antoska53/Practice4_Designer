#include "mypicture.h"
#include <QPainter>
#include <QStatusBar>
#include <QTextStream>

MyPicture::MyPicture(QWidget *parent) : QWidget(parent)
{
    pixmap.load(":MyImages/Images_lab3/WomenAndDog.jpg");
   // rectWid = new QRect();
    //repaint();
}

void MyPicture::paintEvent(QPaintEvent *event){
    QPainter qp(this);
    rectWid = this->rect();
    QPixmap pxm = pixmap.scaled(this->width()*scale/100, this->height()*scale/100, Qt::KeepAspectRatio);
   //QPixmap pxm = pixmap.scaled(100, 100, Qt::KeepAspectRatio);
    qp.drawPixmap(0, 0, pxm);
   QString strStatusBar;

   QTextStream statusBarStream(&strStatusBar);
  statusBarStream << "Width = " << pxm.width();
  statusBarStream << "Height = " << pxm.height();

  emit mySignalScaleChanged(strStatusBar);
}

void MyPicture::scaleChanged(int n){
    scale = n;
    //QString strStatusBar;
    //QTextStream statusBarStream(&strStatusBar);
    //statusBarStream << "Width = " << this->width();
    //statusBarStream << "Height = " << this->height();
    //emit mySignalScaleChanged(strStatusBar);
    repaint();
}
