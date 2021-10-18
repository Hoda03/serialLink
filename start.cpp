#include "start.h"
#include "ui_start.h"

start::start(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::start)
{
    ui->setupUi(this);
    this->setWindowTitle("SL");
    this->setStyleSheet("QMainWindow { background-color : #ffffff}");
    ui->label->setStyleSheet("QLabel { background-color : white; color : #0078d7; }");


      ui->label_3->setFrameStyle(QFrame::Box | QFrame::Sunken);
      ui-> label_3->setLineWidth(3);
      ui-> label_3->setMidLineWidth(2);

      ui->label_2->setFrameStyle(QFrame::StyledPanel | QFrame::Raised);
      ui-> label_2->setLineWidth(3);
      ui-> label_2->setMidLineWidth(3);

}

start::~start()
{
    delete ui;
}

void start::on_pushButton_clicked()
{

    if ((ui -> acars -> isChecked() ))
     {
         start::close();
         acceuil.show();
     }
   /* else if ((ui -> acars -> isChecked() & ui -> radioButton_6 -> isChecked()))
     {
         acceuil::close();
         tcpacars.show();
     }*/


}

