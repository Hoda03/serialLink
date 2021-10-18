#ifndef ACCEUIL_H
#define ACCEUIL_H

#include <QMainWindow>
#include <QtSerialPort/QSerialPort>
QT_BEGIN_NAMESPACE
namespace Ui { class acceuil; }
QT_END_NAMESPACE

class acceuil : public QMainWindow
{
    Q_OBJECT

public:
    acceuil(QWidget *parent = nullptr);
    ~acceuil();

private slots:
    void on_disconnect_clicked();

    void on_actionPARAM_REQ_triggered();

    void readData();

    void on_pushButton_clicked();

    void on_actionPWR_SET_REQ_triggered();

    void on_actionMODE_SET_REQ_2_triggered();

    void on_actionPARAM_REQ_2_triggered();

    void on_actionMODE_SET_REQ_triggered();

    void on_actionUNIT_DATA_REQ_triggered();

    void on_actionPURGE_REQ_triggered();

private:
    Ui::acceuil *ui;
    QSerialPort *serial;
};
#endif // ACCEUIL_H
