#include "dialog.h"
#include "ui_dialog.h"
//#define addEllipse
Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);

    scene = new QGraphicsScene(this);
    ui->graphicsView->setScene(scene);

    QBrush yellowBrush(Qt::yellow);
    QBrush redBrush(Qt::red);
    QPen blackpen(Qt::black);
    blackpen.setWidth(6);

    ellipse = scene->addEllipse(20,20,-100,-100,blackpen,yellowBrush);
    ellipse2 = scene->addEllipse(-110,-110,20,20,blackpen,redBrush);
    ellipse3 = scene->addEllipse(-90,-90,20,20,blackpen,yellowBrush);
    ellipse4 = scene->addEllipse(-130,-130,20,20,blackpen,redBrush);

    //ellipse2->setFlag(QGraphicsItem::ItemIsMovable);

}

Dialog::~Dialog()
{
    delete ui;
}



void Dialog::on_pushButton_clicked()
{
    ui->graphicsView->rotate(-10);

}


void Dialog::on_pushButton_2_clicked()
{
    ui->graphicsView->rotate(+10);

}

